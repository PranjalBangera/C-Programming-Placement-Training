#include <stdio.h>

int main() {
    int m1, m2, m3;
    float avg;

    printf("Enter 3 marks: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3.0;

    printf("Average = %.2f\n", avg);

    if(avg >= 90) printf("Grade A");
    else if(avg >= 75) printf("Grade B");
    else if(avg >= 60) printf("Grade C");
    else if(avg >= 40) printf("Grade D");
    else printf("Fail");

    return 0;
}