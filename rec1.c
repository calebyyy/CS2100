#include <stdio.h>

// Function definition
void write(float *one, float *two) {
    printf("Enter the first number:");
    scanf("%f", one);
    printf("%f\n", *one);
    printf("Enter the second number:");
    scanf("%f", two);
    printf("%f\n", *two);
}

int main(void) {
    float one;
    float two;
    int c;

    char operation;
    int check = 0;

    printf("Please enter an operation (+, -, *, / or q to quit):");
    scanf(" %c", &operation);  // Note the space before %c

    switch (operation) {
        case 'q':
            printf("Bye!\n");
            return 0;
        case '+':
            write(&one,&two);
            printf("%f + %f = %.2f\n", one, two, one + two);
            while ((c = getchar()) != '\n' && c != EOF) {}
            main();
            break;
        case '-':
            write(&one,&two);
            printf("%f - %f = %.2f\n", one, two, one - two);
            while ((c = getchar()) != '\n' && c != EOF) {}
            main();
            break;
        case '*':
            write(&one,&two);
            printf("%f * %f = %.2f\n", one, two, one * two);
            while ((c = getchar()) != '\n' && c != EOF) {}
            main();
            break;
        case '/':
            write(&one,&two);
            printf("%f / %f = %.2f\n", one, two, one / two);
            while ((c = getchar()) != '\n' && c != EOF) {}
            main();
            break;
        default:
            printf("Unrecognized operation\n");
            while ((c = getchar()) != '\n' && c != EOF) {}
            main();
    }
    return 0;
}
