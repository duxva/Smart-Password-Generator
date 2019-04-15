#include <stdio.h>
void pinn(void);
void alpha(void);
void alphanumeric(void);
void complex(void);
int main()
{
    int ch;
    char tr;
    START:
    printf("\n********************************************************************************************");
    printf("\n*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*");
    printf("\n*                                                                                          *");
    printf("\n*                                    Welcome User!                                         *");
    printf("\n*This password generator uses your data to generate a secure, strong and reliable password.*");
    printf("\n*------------------------------------------------------------------------------------------*");
    printf("\n*                                                                                          *");
    printf("\n*What kind of password would you like generate?                                            *");
    printf("\n*1. Pin - 4 digit.                                                                         *");
    printf("\n*2. Alphabetic Password - 12 characters.                                                   *");
    printf("\n*3. Alphanumeric Password - 8 characters.                                                  *");
    printf("\n*4. Complex Password - 8 characters.                                                       *");
    printf("\n*                                                                                          *");
    printf("\n*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*");
    printf("\n********************************************************************************************");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            printf("\nYou have chosen Pin.");
            printf("\n********************************************************************************************");
            pinn();
            break;
        case 2:
            printf("\nYou have chosen Alphabetic Password.");
            printf("\n********************************************************************************************");
            alpha();
            break;
        case 3:
            printf("\nYou have chosen Alphanumeric Password.");
            printf("\n********************************************************************************************");
            alphanumeric();
            break;
        case 4:
            printf("\nYou have chosen Complex Password.");
            printf("\n********************************************************************************************");
            complex();
            break;
        default:
            printf("\nInvalid Choice.");
    }
    return 0;
}
