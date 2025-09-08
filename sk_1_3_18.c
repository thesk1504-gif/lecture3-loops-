#include <stdio.h>

int main() {
    int i, boys = 0, girls = 0;
    char sex;

    printf("Enter sex code for 50 students (M for Boy, F for Girl):\n");

    for (i = 1; i <= 50; i++) {
        scanf(" %c", &sex);  // note space before %c to avoid newline issue

        if (sex == 'M' || sex == 'm')
            boys++;
        else if (sex == 'F' || sex == 'f')
            girls++;
        else
            printf("Invalid input for student %d, use M/F\n", i);
    }

    printf("\nTotal Boys = %d\n", boys);
    printf("Total Girls = %d\n", girls);

    return 0;
}
