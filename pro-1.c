#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a Ntural Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("Sum is %d",sum,i);
    return 0;
}
