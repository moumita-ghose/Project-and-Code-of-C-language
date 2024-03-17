#include<stdio.h>
int main()
{
    int x, remainder,reverse=0;
    printf("Enter value for x:\n");
    scanf("%d",&x);
    while(x!=0){
        remainder=x%10;
        reverse=reverse*10+remainder;
        x=x/10;
    }
    printf("AFTER REVERSE:%d\n",reverse);
    return 0;
}
