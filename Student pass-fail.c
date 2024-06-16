#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Your grade is A+\n");
    }
    else if (marks >= 80 && marks < 90) {
        printf("Your grade is A\n");
    }
    else if (marks >= 70 && marks < 80) {
        printf("Your grade is B+\n");
    }
    else if (marks >= 60 && marks < 70) {
        printf("Your grade is B\n");
    }
    else if (marks >= 50 && marks < 60) {
        printf("Your grade is C+\n");
    }
    else if (marks >= 40 && marks < 50) {
        printf("Your grade is C\n");
    }
    else if (marks >= 0 && marks < 40) {
        printf("You are a Fail student.\n");
    }
    else {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
    }

    return 0;
}
