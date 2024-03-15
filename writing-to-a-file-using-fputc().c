#include<stdio.h>
int main()
{
    FILE *THIS_FILE;
    char name[30]="Moumita Ghose";
    int length=strlen(name);

    int i;
    THIS_FILE=fopen("writting_file","w");
    if(THIS_FILE==NULL){
        printf("THIS FILE IS NOT OPENED\n");
    }else{
        printf("THIS FILE IS OPENED SUCCESSFULLY\n");

        for(i=0;i<length;i++){
            fputc(name[i],THIS_FILE);
        }
         printf("THE FILE IS WRITTEN SUCCESSFULLY\n");
    }
    fclose(THIS_FILE);

    getch();
    return 0;
}

