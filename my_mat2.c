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
    makeShorterst(pointMat);
}
void makeShortesrst(int temp[][10])
{
    for(int i=0 ; i<10 ; i++)
    {
        for(int j=0 ; j<10 ; j++)
        {
            if(i!=j)
            {
                if(temp[i][j]==0)
                {
                    temp[i][j]= __INT_MAX__;
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
                if((temp[i][k]!=__INT_MAX__)&&(temp[k][j]!=__INT_MAX__))
                {
                    int dst = temp[i][k]+temp[k][j];
                    if(dst<temp[i][j])
                    {
                        temp[i][j]=dst;
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