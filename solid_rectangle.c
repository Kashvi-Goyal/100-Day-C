/*

#include<stdio.h>
int main()
    {
        int n;
        printf("Enter a number=");
        scanf("%d",&n);
        
        for(int i=1;i<=3;i++)
        {
            for(int i=1; i<=n; i++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }
*/

#include<stdio.h>
int main()
    {
        int n,m;
        printf("Enter number of rows=");
        scanf("%d",&n);

        printf("Enter numbers of coloumns=");
        scanf("%d",&m);
        
        for(int i=1;i<=n;i++)
        {
            for(int i=1; i<=m; i++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }

