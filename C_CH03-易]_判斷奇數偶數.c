#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)  //除2餘0為偶數
    {
        printf("even\n");
    }
    else
        printf("odd\n");
    return 0;
}
