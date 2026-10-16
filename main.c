#include <stdio.h>

void add();
void subtract();

int main(void) {
    int Option;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("Enter your option: \n");

    if (scanf("%d", &Option) != 1) {
        printf("Wrong input. Please try again.\n");
        return 1;
    }
    switch (Option) {
        case 1:
            add();
            break;

        case 2:
            subtract();
            break;

        default:
            printf("Wrong input. Please try again.\n");
    }
    return 0;
}
    void add() {
        int A, B;
        printf("Enter the first number: ");
        scanf("%d", &A);
        printf("Enter the second number: ");
    scanf("%d", &B);
    printf("The sum of the two numbers is: %d\n", A + B);
    }
void subtract() {
    int A, B;
    printf("Enter the first number: ");
    scanf("%d", &A);
    printf("Enter the second number: ");
    scanf("%d", &B);
    printf("The difference of the two numbers is: %d\n", A - B);

}
