int main(){}
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

// Number of students and exams
const size_t STUDENTS = 3;
const size_t EXAMS = 4;

// Function to print the 2D array of student grades in a tabular format
// Students (rows), exams (columns)
void printArray(int grades[][EXAMS], size_t students, size_t exams) {
    printf("The array is:\n");
    printf("                 [0]  [1]  [2]  [3]\n");
    for (size_t i = 0; i < students; ++i) {
        printf("studentGrades[%zu] ", i);
        for (size_t j = 0; j < exams; ++j) {
            printf("%5d", grades[i][j]); // Print each grade with a width of 5
        }
        printf("\n");
    }
}
