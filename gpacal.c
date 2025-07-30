#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100) {
        printf("Grade: A+");
    }
    else if (marks >= 70 && marks < 80) {
        printf("Grade: A");
    }
    else if (marks >= 60 && marks < 70) {
        printf("Grade: A-");
    }
    else if (marks >= 50 && marks < 60) {
        printf("Grade: B");
    }
    else if (marks >= 40 && marks < 50) {
        printf("Grade: C");
    }
    else if (marks >= 33 && marks < 40) {
        printf("Grade: D");
    }
    else if (marks >= 0 && marks < 33) {
        printf("Grade: F (Fail)");
    }
    else {
        printf("Invalid marks! Please enter between 0 and 100.");
    }

    return 0;
}
