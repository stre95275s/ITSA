#include<stdio.h>
int main()
{
    int score;
    scanf("%d",&score);
    if(score>=90&&score<=100)   //成績在90～100分之間為A
        printf("A\n");
    else if(score>=80&&score<=89)   //成績在80～89分為B
        printf("B\n");
    else if(score>=70&&score<=79)   //範圍在70～79分為C
        printf("C\n");
    else if(score>=60&&score<=69)   //而範圍落在60～69為D
        printf("D\n");
    else if(score<60)   //未滿60為E
        printf("E\n");
    else if(score>100)  //超過100
        printf("error\n");

    return 0;
}
