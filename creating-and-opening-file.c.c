#include<stdio.h>

int main()
{
    FILE *file;
    file=fopen("test.txt","w");

    if(file==NULL){
        printf("File doesn't exist\n");
    }else{
        printf("file is opened successfully\n");

        fclose(file);
    }

    getch();

    return 0;
}

