#include<stdio.h>
int main()
{
    int sum=0,i;
  printf("Enter the value for n:");
  scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum=%d\n",sum);
}
