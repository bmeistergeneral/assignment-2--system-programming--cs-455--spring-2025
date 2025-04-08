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
// Function to find the minimum grade among all students and exams
void minimum(int grades[][EXAMS], size_t students, size_t exams) {
    int lowGrade = grades[0][0];
    for (size_t i = 0; i < students; ++i) {
        for (size_t j = 0; j < exams; ++j) {
            if (grades[i][j] < lowGrade) {
                lowGrade = grades[i][j]; // Update if a lower grade is found.
            }
        }
    }
    printf("\nLowest grade: %d\n", lowGrade);
}
// Function to find the maximum grade among students and exams
void maximum(int grades[][EXAMS], size_t students, size_t exams) {
    int highGrade = grades[0][0];
    for (size_t i = 0; i < students; ++i) {
        for (size_t j = 0; j < exams; ++j) {
            if (grades[i][j] > highGrade) {
                highGrade = grades[i][j];
            }
        }
    }
    printf("\nHighest grade: %d\n", highGrade);
}
// Function to find and print the average grade for each student
void average(int grades[][EXAMS], size_t students, size_t exams) {
    for (size_t i = 0; i < students; ++i) {
        double total = 0;
        for (size_t j = 0; j < exams; ++j) {
            total += grades[i][j]; // Sum the grades for the current student.
        }
        double averageGrade = total / exams; // Calculate average
        printf("\nAverage for student %zu: %.2f\n", i, averageGrade); // Print the average with 2 decimal places
    }
}
