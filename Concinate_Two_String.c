// Question : Write a program to Concinate two Strings without using standard library functions 

#include <stdio.h>  // Integrate the Standard I/O library

int main() {  // Commence main function

    char str1[100], str2[100];  // Arrays to store the two strings
    int i = 0, j = 0;  // Counters for string traversal

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Traverse to the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Copy characters of the second string to the end of the first string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  // Terminate the concatenated string with a null character

    // Display the concatenated string
    printf("Concatenated String: %s\n", str1);

    return 0;  // Terminate the program gracefully
}

// Output of this program is:
/*
Enter the first string: Hello
Enter the second string: World
Concatenated String: HelloWorld
*/