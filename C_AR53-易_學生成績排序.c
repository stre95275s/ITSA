#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int a[num],i,k;
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    int tmp;
    for(i=0;i<num;i++)  //bubble sort
    {
        for(k=i;k<num;k++)
        {
            if(a[k]<a[i])
            {
                tmp=a[k];
                a[k]=a[i];
                a[i]=tmp;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
