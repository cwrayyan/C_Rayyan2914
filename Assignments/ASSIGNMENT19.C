#include <stdio.h>
#include <string.h>

// Structure definition
struct Employee {
    char name[50];
    char designation[50];
    char gender; // 'M' or 'F'
    int day, month, year; // Date of joining
    float salary;
};

void countGender(struct Employee emp[], int n);
void countHighSalary(struct Employee emp[], int n);
void countAsstManager(struct Employee emp[], int n);

int main() {
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Date of Joining (dd mm yyyy): ");
        scanf("%d %d %d", &emp[i].day, &emp[i].month, &emp[i].year);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Total employees
    printf("\nTotal number of employees: %d\n", n);

    // Function calls
    countGender(emp, n);
    countHighSalary(emp, n);
    countAsstManager(emp, n);

    return 0;
}

// Function to count male and female employees
void countGender(struct Employee emp[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(emp[i].gender == 'M' || emp[i].gender == 'm')
            male++;
        else if(emp[i].gender == 'F' || emp[i].gender == 'f')
            female++;
    }

    printf("\nMale employees: %d", male);
    printf("\nFemale employees: %d\n", female);
}

// Function to count employees with salary > 10000
void countHighSalary(struct Employee emp[], int n) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(emp[i].salary > 10000)
            count++;
    }

    printf("\nEmployees with salary > 10000: %d\n", count);
}

// Function to count Assistant Managers
void countAsstManager(struct Employee emp[], int n) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "AsstManager") == 0)
            count++;
    }

    printf("\nEmployees with designation Asst Manager: %d\n", count);
}