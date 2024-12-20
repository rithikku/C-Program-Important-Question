// Display About 5 Student Using Structure and not using loop
#include <stdio.h>

// Define the structure "Student"
struct Student {
    int studentID;
    char name[50];
    float class[10];
};

int main() {
    struct Student student1, student2, student3, student4, student5;

    // Input details for the first employee
    printf("Input details for Student 1:\n");
    printf("Student ID: ");
    scanf("%d", &student1.studentID);
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Class: ");
    scanf("%s", &student1.class);

    // Input details for the second employee
    printf("\nInput details for Student 2:\n");
    printf("Student ID: ");
    scanf("%d", &student2.studentID);
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Class: ");
    scanf("%s", &student2.class);

    // Input details for the third employee
    printf("\nInput details for Student 3:\n");
    printf("Student ID: ");
    scanf("%d", &student3.studentID);
    printf("Name: ");
    scanf("%s", student3.name);
    printf("Class: ");
    scanf("%s", &student3.class);

    // Input details for the fourth employee
    printf("\nInput details for Student 3:\n");
    printf("Student ID: ");
    scanf("%d", &student4.studentID);
    printf("Name: ");
    scanf("%s", student4.name);
    printf("Class: ");
    scanf("%s", &student4.class);

    // Input details for the fourth employee
    printf("\nInput details for Student 3:\n");
    printf("Student ID: ");
    scanf("%d", &student5.studentID);
    printf("Name: ");
    scanf("%s", student5.name);
    printf("Class: ");
    scanf("%s", &student5.class);

    return 0;
}
