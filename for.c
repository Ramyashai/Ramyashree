#include<stdio.h>
int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        sum+=i;
    }
    printf("sum=%d",sum);
    return 0;
    
}
