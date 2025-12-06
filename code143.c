// Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[idx].marks)
            idx = i;
    }

    printf("\nTop Student:\n");
    printf("Name: %s, Roll No: %d, Marks: %.2f\n", s[idx].name, s[idx].roll_no, s[idx].marks);

    return 0;
}