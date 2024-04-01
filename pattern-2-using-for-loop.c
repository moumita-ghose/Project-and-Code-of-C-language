/*
AUTHOR : MOUMITA GHOSE
UNIVERSITY OF BARISHAL
SESSION : 2022-23

PROBLEM  : PRINT THE FOLLOWING PATTERN
---------------------------------------

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9

*/
//CODE STARTS FROM HERE:
#include<stdio.h>
int main()
{
    int row, col,n;
    printf("Enter how many lines do you want?\nEnter the vvalue for n : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",row);
        }
        printf("\n");
    }
    return 0;
}
