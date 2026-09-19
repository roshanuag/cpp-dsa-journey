#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, total, percentage;

    printf("Enter marks for 4 subjects (out of 100 each): ");
    scanf("%f %f %f %f", &sub1, &sub2, &sub3, &sub4);

   
    if (sub1 < 40.0 || sub2 < 40.0 || sub3 < 40.0 || sub4 < 40.0) {
        printf("Result: Failed (marks below 40 in one or more subjects)\n");
    } else {
        total = sub1 + sub2 + sub3 + sub4;
        percentage = (total / 400.0) * 100.0;

        printf("Total Marks: %.2f / 400.00\n", total);
        printf("Percentage : %.2f%%\n", percentage);

        if (percentage >= 75.0) {
            printf("Division   : First Division with Distinction\n");
        } else if (percentage >= 60.0) {
            printf("Division   : First Division\n");
        } else if (percentage >= 50.0) {
            printf("Division   : Second Division\n");
        } else {
            printf("Division   : Third Division\n");
        }
    }

    return 0;
}