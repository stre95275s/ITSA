#include<stdio.h>

int main()
{
    int a[6],i;
    for(i=0;i<6;i++)    //讀六筆
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
    for(i=0;i<6;i++)   //反序印出
    {
        printf("%d",a[5-i]);
        if(i<5)
        {
            printf(" ");
        }
    }
    printf("\n");
}
