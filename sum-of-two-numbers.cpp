#include<stdio.h>

int findSum(int num1,int num2)
{
    return num1+num2;
}
// starting main function
int main()
{
  int a,b, result;
  printf("Enter value for a and b:");
  scanf("%d %d",&a,&b);

  result=findSum(a,b);
  printf("\n\nThe sum of %d and %d is:%d\n\n",a,b,result);
return 0;
}
