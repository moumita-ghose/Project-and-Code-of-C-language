/* 
AUTHOR : MOUMITA GHOSE
UNIVERSITY OF BARISHAL
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7

*/

#include<stdio.h>
int main()
{
    int n, row, col;
    printf("How many lines do you want to print?\nEnter value for n : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}
