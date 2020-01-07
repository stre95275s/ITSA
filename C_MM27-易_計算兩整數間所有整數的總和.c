#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a<b)
        {
            c=(a+b)*(b-a+1)/2;  //上底加下底乘以高除以二
            printf("%d\n",c);
        }
        else
        {
            c=(a+b)*(a-b+1)/2;  //上底加下底乘以高除以二
            printf("%d\n",c);
        }
    }
    return 0;
}
