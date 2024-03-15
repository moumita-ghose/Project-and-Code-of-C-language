/*    this code represents how to print something in a file using fprintf() function    */

#include<stdio.h>
int main()
{
    FILE *file1;
    file1=fopen("information.txt","a");
    char name[20],subject[30];
    int age;
    float cgpa;
    if(file1==NULL){
        printf("the file is not opened\n");
    }else{
        printf("the file is opened successfully\n");
        printf("enter your name:\n");
        gets(name);
        printf("\nenter your age:");
        scanf("%d",&age);
        fflush(stdin);
        printf("\nEnter your subject: ");
        gets(subject);
        fflush(stdin);
        printf("Enter your CGPA: ");
        scanf("%f",&cgpa);
        fprintf(file1,"\n\nname:%s\nage:%d\nsubject:%s\nCGPA:%.1f\n",name,age,subject,cgpa);
        printf("\nFile is written successfully\n");

    }
    fclose(file1);
    getch();
}
