#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include "sorting.h"

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
// Main function for the grade reporting program
void gradeReportingProgram() {
    int studentGrades[STUDENTS][EXAMS] = {
        {77, 68, 86, 73},
        {96, 87, 89, 78},
        {70, 90, 86, 81}
    };
    // Array of function pointers. Each pointer in this array can point to a function
    // that takes a 2D integer array, and two size_t arguments, and returns void.
    void (*processGrades[4])(int[][EXAMS], size_t, size_t) = {
        printArray, minimum, maximum, average // Initialize the array with function addresses
    };

    int choice;
    do {
        printf("\nEnter a choice:\n  0  Print the array of grades\n  1  Find the minimum grade\n  2  Find the maximum grade\n  3  Print the average on all tests for each student\n  4  End program\n? ");
        scanf("%d", &choice);

        // Check if the user's choice is within the valid range
        if (choice >= 0 && choice < 4) {
            // Call the function pointed to by the element at index 'choice' in the 'processGrades' array
            processGrades[choice](studentGrades, STUDENTS, EXAMS);
        } else if (choice != 4) {
            printf("Invalid choice.\n");
        }
    } while (choice != 4); // Continue until the user chooses to end the program
    printf("----------------------------------------------------------------------\n");
}

int main() {
    printf("Bubble Sort Program:\n");
    bubbleSortProgram();
    printf("\nGrade Reporting Program:\n");
    gradeReportingProgram();

    return 0;
}