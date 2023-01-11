#include <stdio.h>
#include<stdlib.h>
int note() {
    FILE *fp;

    char text,fn[50];
    int ch;
    printf("\n\n\n\tNOTEPAD\n");
    printf("\n\n\n\n Enter file name:");
   scanf("%s",&fn);
    //gets(fn);
    while(1) 
    {
         printf("\n\n\n Enter your choice that you want to perform \n1.write in file\n2.reading from file\n 3.Add more things on file\n");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1:
        fp=fopen(fn,"w");
        printf("\n\n\n\t\tWRITING MODE IS RUNNING ON\n");
        printf("for saving the file press CTRL+Z\n");
        while((text=getchar())!=EOF)
        {
            putc(text,fp);
        }
        fclose(fp);
        break;
        case 2:
     
        fp=fopen(fn,"r");
        printf("\n\n\n\t\tREADING MODE IS RUNNING ON\n");
        while((text=getc(fp))!=EOF)
        {
            printf("%c",text);
        }
        fclose(fp);
    break;
    
        case 3:
            fp=fopen(fn,"a");
            printf("\n\n\n ADDING MODE\n");
            printf("for saving the file press CTRL+Z\n");
            while((text=getchar())!=EOF)
            {
                putc(text,fp);
            }
            fclose(fp);
            break;
            case 4:
            exit(0); 
            default:printf("Enter choice from the list!!");

        }}}
        int main(){

        int ch;
        while(1)
        {
            printf("enter  your choice 1. exit 2. perform notepad tasks\n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1: exit(1); 
                break;
                case 2:
                note();
                break;
                }
        }
        return 0;
        }
