// Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter name, roll number, marks: ");
    scanf("%s %d %f", ptr->name, &ptr->roll_no, &ptr->marks);

    printf("\nBefore modification:\n");
    printf("Name: %s, Roll No: %d, Marks: %.2f\n", ptr->name, ptr->roll_no, ptr->marks);

    printf("\nModify marks: ");
    scanf("%f", &ptr->marks);

    printf("\nAfter modification:\n");
    printf("Name: %s, Roll No: %d, Marks: %.2f\n", ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}