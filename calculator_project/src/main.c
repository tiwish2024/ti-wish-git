#include <stdio.h>
#include <stdint.h>
#include "../inc/add.h"
#include "../inc/sub.h"
#include "../inc/mul.h"
#include "../inc/div.h"
#include "../inc/menu.h"

void printCalculatorMenu();

int main() {
    int choice;
    int32_t num1, num2;

    printf("\n\rWelcome to the Calculator Project\n\r");

    while (1) {
        printCalculatorMenu();
        scanf("%d", &choice);
        
        if (choice < 1 || choice > 4) {
            printf("Invalid choice! Please select again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
            case 1:
                printf("Result: %d\n", addition(num1, num2));
                break;
            case 2:
                printf("Result: %d\n", subtraction(num1, num2));
                break;
            case 3:
                printf("Result: %d\n", multiplication(num1, num2));
                break;
            case 4:
                printf("Result: %d\n", division(num1, num2));
                break;
            default:
                printf("Invalid choice! Please select again.\n");
                break;
        }
    }

    return 0;
}
