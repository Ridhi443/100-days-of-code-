// Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name, ID, salary for employee %d: ", i + 1);
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);
    }

    FILE *fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(e, sizeof(struct Employee), n, fp);
    fclose(fp);

    printf("\nReading from file:\n");
    struct Employee empRead;
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fread(&empRead, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", empRead.name, empRead.id, empRead.salary);
    }

    fclose(fp);
    return 0;
}