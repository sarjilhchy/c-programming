#include <stdio.h>

int main() {
    int marks[8];
    float credit[8];
    float totalPoints = 0.0;
    float totalCredits = 0.0;
    float cgpa;

    for (int i = 0; i < 8; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        printf("Enter credit hours for subject %d: ", i + 1);
        scanf("%f", &credit[i]);

        float point;
        if (marks[i] >= 80) {
            point = 4.0;
        } else if (marks[i] >= 75) {
            point = 3.75;
        } else if (marks[i] >= 70) {
            point = 3.5;
        } else if (marks[i] >= 65) {
            point = 3.25;
        } else if (marks[i] >= 60) {
            point = 3.0;
        } else if (marks[i] >= 55) {
            point = 2.75;
        } else if (marks[i] >= 50) {
            point = 2.5;
        } else if (marks[i] >= 45) {
            point = 2.25;
        } else if (marks[i] >= 40) {
            point = 2.0;
        } else {
            point = 0.0;
        }

        totalPoints += point * credit[i];
        totalCredits += credit[i];
    }

    if (totalCredits > 0) {
        cgpa = totalPoints / totalCredits;
        printf("\nYour CGPA is: %.2f\n", cgpa);
    } else {
        printf("\nCannot calculate CGPA. Total credits are zero.\n");
    }

    return 0;
}