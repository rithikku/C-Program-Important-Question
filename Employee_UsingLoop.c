// Display About 5 Student Using Strucure and using loop

#include <stdio.h>
struct employee {
    char name[50];
    int ID;
    float salary;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].ID = i + 1;
        printf("\nFor ID number%d,\n", s[i].ID);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter salary: ");
        scanf("%f", &s[i].salary);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].name);
        printf("Marks: %.1f", s[i].salary);
        printf("\n");
    }
    return 0;
}
