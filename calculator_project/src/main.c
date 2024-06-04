#include <stdio.h>
#include <stdint.h>
#include "../inc/add.h"
#include "../inc/sub.h"
#include "../inc/mul.h"
#include "../inc/div.h"
#include "../inc/menu.h"

int main()
{
    printf("\n\rWelcome to the Calculator Project\n\n\r");
    while (1)
    {
        printCalculatorMenu();
        int op; // operation ID
        int32_t num1, num2; // Input numbers
        printf("Enter number corresponding to required operation: ");
        scanf("%d", &op);

        // If operation ID is not in calculator menu, the program will terminate
        if (!(op == 1 || op == 2 || op == 3 || op == 4))
        {
            printf("Incorrect operation ID\n");
            printf("Terminating calculator project\n");
            return 0;
        }
        else
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            int32_t ans;
            if (op == 1)
            {
                ans = addition(num1, num2);
            }
            else if (op == 2)
            {
                ans = multiplication(num1, num2);
            }
            else if (op == 3)
            {
                ans = subtraction(num1, num2);
            }
            else if (op == 4)
            {
                ans = division(num1, num2);
            }
            printf("Answer: %d\n", ans);
        }
    }
    return 0;
}