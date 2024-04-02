/*
AUTHOR : MOUMITA GHOSE
UNIVERSITY OF BARISHAL
SESSION : 2022-23
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
1 0 1 0 1 0
1 0 1 0 1 0 1
1 0 1 0 1 0 1 0
*/
#include<stdio.h>
int main()
{
    int row, col,n;
    printf("Enter how many lines do you want?\nEnter the vvalue for n : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",col%2);
        }
        printf("\n");
    }


    return 0;
}
