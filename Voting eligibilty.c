#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }
    else if (age > 0 && age < 18) {
        printf("You are not eligible to vote.\n");
    }
    else {
        printf("Invalid age entered. Please enter a valid age.\n");
    }

    return 0;
}
