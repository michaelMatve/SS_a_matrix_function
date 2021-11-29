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
    for(int i=0 ; i<10 ; i++)
    {
        for(int j=0 ; j<10 ; j++)
        {
            if(i!=j)
            {
                if(pointMat[i][j]==0)
                {
                    pointMat[i][j]= __INT_MAX__;
                }
            }
        }
    }

    for(int k=0 ; k<10 ; k++)
    {
        for(int i=0 ; i<10 ; i++)
        {
            for(int j=0 ; j<10 ;j++)
            {
                if((pointMat[i][k]!=__INT_MAX__)&&(pointMat[k][j]!=__INT_MAX__))
                {
                    int dst = pointMat[i][k]+pointMat[k][j];
                    if(dst<pointMat[i][j])
                    {
                        pointMat[i][j]=dst;
                    }
                }
            }
        }
    }

}

int shortPuth( int matrix[][10] , int src ,int dest)
{
    if(matrix[src][dest]==__INT_MAX__)
    {
        return 0;
    }
    return matrix[src][dest];
}