//WAP to check whether a matrix is skew-symmetric or not.
#include<stdio.h>
void main()
{
    int i,j,r,c,f=0;

    printf("Enter the No. of Row & Column = ");
    scanf("%d%d",&r,&c);

    if(r==c)
    {
        int a[r][c];

        //input
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("Enter the no. = ");
                scanf("%d",&a[i][j]);
            }
        }

        //print
        printf("Matrix = \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

        //check skew-symmetric
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j] != -a[j][i])
                {
                    f = 1;
                    break;
                }
            }
            if(f==1)
               break;
        }

        if(f==0)
            printf("Skew-Symmetric Matrix");
        else
            printf("Not a Skew-Symmetric Matrix");
    }
    else
    {
        printf("It's Not a Square Matrix so it cannot be skew-symmetric");
    }
}
