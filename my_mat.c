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
    int shortputh[10]={};
    for(int i=0; i<10 ; i++)
    {
        shortputh[i]= 0;
    }
    int ifVisited[10]={0};
    int nowCheck = src;
    while(nowCheck >= 0)
    {
        ifVisited[nowCheck]=1;
        for(int i = 0 ; i<10 ; i++)
        {
            if(ifVisited[i]==0)
            {
                if(pointMat[nowCheck][i]!=0)
                {
                    int dst = shortputh[nowCheck] + pointMat[nowCheck][i];
                    if(shortputh[i] ==0)
                    {
                        shortputh[i]=dst;
                    }
                    else
                    {
                        if(shortputh[i]>dst)
                        {
                            shortputh[i]=dst;
                        }
                    }
                }
            }
        }
        nowCheck = 0;
        while(nowCheck<10)
        {
            if(ifVisited[nowCheck]==0)
            {
                if(shortputh[nowCheck]!=0)
                {
                    break;
                }
            }
            nowCheck++;
        }
        if(nowCheck==10)
        {
            break;
        }
        for(int i=nowCheck ; i<10 ; i++)
        {
             if(ifVisited[i]==0)
            {
                if((shortputh[i]!=0)&&(shortputh[i]<shortputh[nowCheck]))
                {
                    nowCheck=i;
                }
            } 
        }

    }

    return shortputh[dest];


}