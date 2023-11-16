#include<stdio.h>
#include<conio.h>

void main()
{
    int number, rev=0, temp;
    printf("enter your number\n");
    scanf("%d", &number);
    temp = number;
    while (number!= 0)
    {
        int digit = number%10;
        rev = rev*10 + digit;
        number = number/10;
    }
    
    if (rev == temp)
    {
        printf("The number is a Palindrome number");
    }
    else
        printf("the number is not palindrome");

    getch();
}