#include <stdio.h>

#define STUDENT_COUNT 5

// Structure to hold student details
struct Student {
    char name[50];
    float subject1, subject2, subject3;
    char grade;
};

// Function to calculate grade based on average score
char calculateGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    struct Student students[STUDENT_COUNT]; 
    int i;

    // Input student details
    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Reads full name including spaces

        printf("Subject 1 Score: ");
        scanf("%f", &students[i].subject1);
        printf("Subject 2 Score: ");
        scanf("%f", &students[i].subject2);
        printf("Subject 3 Score: ");
        scanf("%f", &students[i].subject3);

        // Calculate average score and assign grade
        float average = (students[i].subject1 + students[i].subject2 + students[i].subject3) / 3;
        students[i].grade = calculateGrade(average);
    }

    // Display student records
    printf("\nStudent Records:\n");
    printf("-------------------------------------------------------------\n");
    printf("| %-20s | %-6s | %-6s | %-6s | %-5s |\n", "Name", "Sub1", "Sub2", "Sub3", "Grade");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("| %-20s | %-6.2f | %-6.2f | %-6.2f | %-5c |\n", 
                students[i].name, 
                students[i].subject1, 
                students[i].subject2, 
                students[i].subject3, 
                students[i].grade);
    }
    printf("-------------------------------------------------------------\n");

    return 0;
}

