#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=n/10;
    b=(n-a*10)/5;
    c=n-a*10-b*5;
    printf("NT10=%d\n",a);
    printf("NT5=%d\n",b);
    printf("NT1=%d\n",c);
    return 0;
}
