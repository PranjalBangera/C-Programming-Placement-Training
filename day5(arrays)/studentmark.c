//student mark analysis system
#include <stdio.h>

int main() {
    int marks[10], total = 0;
    int highest, lowest;
    float average;

    printf("Enter marks of 10 students:\n");

    for (int i = 0; i < 10; i++) {
    
        scanf("%d", &marks[i]);
        total += marks[i];

        if (i == 0) {
            highest = lowest = marks[i];
        }

        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];
    }

    average = total / 10.0;

    printf("\n--- Class Statistics ---\n");
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Highest Score = %d\n", highest);
    printf("Lowest Score = %d\n", lowest);

    return 0;
}