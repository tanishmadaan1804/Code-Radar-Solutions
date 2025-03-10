#include <stdio.h>
#include <string.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};
int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);
    struct Student students[N];
    for (int i = 0; i < N; i++) {
        printf(" %d (Roll Number, Name, Marks):\n", i + 1);
        scanf("%d", &students[i].rollNumber);
        getchar(); 
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 
        scanf("%f", &students[i].marks);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNumber,
               students[i].name,
               students[i].marks);
    }
    return 0;
}
