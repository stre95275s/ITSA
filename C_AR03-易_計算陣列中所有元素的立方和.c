#include<stdio.h>

int main()
{
    int a[6],i;
    for(i=0;i<6;i++)    //輸入六筆
    {
        scanf("%d",&a[i]);
    }
/*
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
*/
    int sum=0;
    for(i=0;i<6;i++)    //立方和
    {
        sum=sum+(a[i]*a[i]*a[i]);
    }
    printf("%d\n",sum);
    return 0;
}
