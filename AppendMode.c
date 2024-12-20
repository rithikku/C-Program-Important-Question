#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = NULL;
    char str[50];
    fp = fopen("abc.txt", "a");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Enter the context you want to Append");
    gets(str);
    fprintf(fp, "%s", str);
    printf("Successfully Append");
    fclose(fp);
    return 0;
}