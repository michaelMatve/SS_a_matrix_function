#include <stdio.h>

void getValus(int pointMat[][10])
{
    int num;
    for(int i = 0; i<10 ; i++)
        {
            for( int j=0 ; j<10 ; j++)
            {
                scanf("%d" ,&num);
                pointMat[i][j]= num;
            }
        }
}

int shortPuth(int pointMat[][10], int src, int dest)
{
    int tempmat[10]={};
    for(int i=0; i<10 ; i++)
    {
        tempmat[i]= 0;
    }
    int arr[10]={0};
    int numCheck = src;
    while(numCheck >= 0)
    {
        arr[numCheck]=1;
        for(int i = 0 ; i<10 ; i++)
        {
            if(arr[i]==0)
            {
                if(pointMat[numCheck][i]!=0)
                {
                    int dist = tempmat[numCheck] + pointMat[numCheck][i];
                    if(tempmat[i] ==0)
                    {
                        tempmat[i]=dist;
                    }
                    else
                    {
                        if(tempmat[i]>dist)
                        {
                            tempmat[i]=dist;
                        }
                    }
                }
            }
        }
        numCheck = 0;
        while(numCheck<10)
        {
            if(arr[numCheck]==0)
            {
                if(tempmat[numCheck]!=0)
                {
                    break;
                }
            }
            numCheck++;
        }
        if(numCheck==10)
        {
            break;
        }
        for(int i=numCheck ; i<10 ; i++)
        {
             if(arr[i]==0)
            {
                if((tempmat[i]!=0)&&(tempmat[i]<tempmat[numCheck]))
                {
                    numCheck=i;
                }
            } 
        }

    }

    return tempmat[dest];


}