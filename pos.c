#include<stdio.h>
int main()
{
  int num;
  printf("enter a num:");
  scanf("%d",&num);
  {
  if(num<0)
    printf("negative num");
    {
      else if(num>0)
      printf("positive num");
    } 
    else
    printf("you entered 0");
  }
  return 0;
}
