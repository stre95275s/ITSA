#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long int sum[20];
    sum[1]=1;
    for(i=2;i<20;i++)
    {
        sum[i]=sum[i-1]*i;
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%lld\n",sum[n]);
    }
    return 0;
}
