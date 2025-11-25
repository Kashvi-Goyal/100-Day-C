#include<stdio.h>
int main()
    {
        int arr[5],i,n,sum=0;
        printf("Enter number of students=");
        scanf("%d",&n);

        for(i=0;i<n;i++)
    {
        printf("Enter marks of student %d",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum=%d",sum);


        }