#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter roll number, name, and marks for student %d: ", i + 1);
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    // Display student