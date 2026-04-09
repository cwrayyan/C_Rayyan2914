#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        
        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display
    printf("\n--- Student Details ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);

        if(s[i].marks >= 40)
            printf("Result: Pass\n");
        else
            printf("Result: Fail\n");
    }

    return 0;
}