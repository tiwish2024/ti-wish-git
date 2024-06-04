#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include "../inc/add.h"
#include "../inc/sub.h"
#include "../inc/mul.h"
#include "../inc/div.h"
#include "../inc/menu.h"
int main()
{
    printf("\n\rWelcome to the Calculator Project\n\r");
    while (1)
    {
        printCalculatorMenu();
        int choice;
        int32_t num1, num2, result;
        printf("Enter your choice : ");
        scanf("%d", &choice);
        printf("enter the number 1 : ");
        scanf("%" SCNd32, &num1);
        printf("Enter your number 2 : ");
        scanf("%" SCNd32, &num2);
        switch (choice)
        {
        case 1:
            result = addition(num1, num2);
            printf("Answer of Addition Operation : %d", result);
            printf("\n");
            break;
        case 2:
            result = subtraction(num1, num2);
            printf("Answer of Subtraction Operation : %d", result);
            printf("\n");
            break;
        case 3:
            result = multiplication(num1, num2);
            printf("Answer of multiplication Operation : %d", result);
            printf("\n");
            break;
        case 4:
            result = division(num1, num2);
            printf("Answer of division Operation : %d", result);
            printf("\n");
            break;
        default:
            printf("Invalid Choicd\n");
            printf("\n");
            break;
        }
    }
    return 0;
}