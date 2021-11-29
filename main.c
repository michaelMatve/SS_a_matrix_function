#include <stdio.h>
#include "my_mat.h"

int main()
{
    int src,dest;
    int myMatrix[10][10] = {};
    char funck='0';

    while (funck != 'D')
    {
        scanf("%c", &funck);
        if(funck == 'A')
        {
            getValus(myMatrix);
        }
        if(funck == 'B')
        {
            scanf("%d %d",&src, &dest);
            if(shortPuth(myMatrix,src,dest)==0)
            {
                printf("False");
                printf("\n");
            }
            else
            {
                printf("True");
                printf("\n");
            }
        }
        if(funck=='C')
        {
            scanf("%d %d",&src, &dest);
            int dst =shortPuth(myMatrix,src,dest);
            if(dst==0)
            {
                printf("-1");
                printf("\n");
            }
            else
            {
                printf("%d",dst);
                printf("\n");
            }
        }
    }
    
    {

    }

}

