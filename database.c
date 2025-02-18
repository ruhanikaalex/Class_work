#include <stdio.h>

// Define a structure for student data
typedef struct {
    char name[50];
    float subj1;
    float subj2;
    float subj3;
    char grade;
} Student;

// Function to calculate grade based on average score
char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    Student students[5];
    int i;
    
    // Input student details
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %49s", students[i].name);
        printf("Subject 1 marks: ");
        scanf("%f", &students[i].subj1);
        printf("Subject 2 marks: ");
        scanf("%f", &students[i].subj2);
        printf("Subject 3 marks: ");
        scanf("%f", &students[i].subj3);
        
        // Calculate grade
        float avg = (students[i].subj1 + students[i].subj2 + students[i].subj3) / 3;
        students[i].grade = calculateGrade(avg);
    }
    
    // Display stored data
    printf("\nStudent Records:\n");
    printf("--------------------------------------\n");
    printf("Name\tSubj1\tSubj2\tSubj3\tGrade\n");
    printf("--------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t%.2f\t%.2f\t%.2f\t%c\n", students[i].name, students[i].subj1, students[i].subj2, students[i].subj3, students[i].grade);
    }
    
    return 0;
}

