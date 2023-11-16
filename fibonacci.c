#include<stdio.h>
#include<conio.h>

void main()
{
    int number, first=1, second=1;
    printf("enter the number of fiboancci sequence you want\n");
    scanf("%d", &number);
    printf("%d\t%d", first , second);

    for (int i = 0; i < (number-2); i++)
    {
        int digit = (first + second);
        first = second;
        second = digit;
        printf("\t%d\t", digit);
    }
    //comment added in New-feature
    getch();
}