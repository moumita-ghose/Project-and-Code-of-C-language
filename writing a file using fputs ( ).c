/*  adding newline using fputs() */
#include<stdio.h>

int main()
{
    FILE *my_file;
    my_file=fopen("information_stocking.txt", "a");
    char name[35];
    if(my_file==NULL){
        printf("File is not opened\n");
    }else{
        printf("File is opened successfully\n");
        printf("Enter your name:");
        gets(name);
        fputs(name,my_file);
        fputs("\n\n",my_file);
        printf("\nThe file is written successfully.\n");
        fclose(my_file);
    }

}
