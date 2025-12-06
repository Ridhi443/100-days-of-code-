// Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[idx].marks)
            idx = i;
    }
    return s[idx];
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);

    printf("\nTop Student:\n");
    printf("Name: %s, Roll No: %d, Marks: %.2f\n", top.name, top.roll_no, top.marks);

    return 0;
}