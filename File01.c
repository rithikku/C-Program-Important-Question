#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fptr1 = NULL, *fptr2 = NULL;
    char c ;
    int n = 1;
    fptr1 = fopen("abc.txt", "r"); // In this i can take one file that name is abc.txt and i open the file in read mode...
    if (fptr1 == NULL)
    {
        printf("No file");
        exit(1);
    }
    fptr2 = fopen("destination.txt", "w");
    if (fptr2 == NULL)  
    {
        printf("No file");
        exit(1);
    }
    while ((c = fgetc(fptr1))!= EOF) //abc.txt file meh jitna content hai usko copy karna hai end of file tak issi liye ye line likhe hain...
    {
        fputc(c, fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
    printf("Successfully Copied");
}