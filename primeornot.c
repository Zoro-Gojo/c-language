#include<stdio.h>
#include<conio.h>

void main()
{
    int num, count = 0;

    printf("enter a positive integer : ");
    scanf("%d", &num);

    while (num <= 0)
    {
        printf("enter a positive integer : ");
        scanf("%d", &num);
        if (num > 0)
            break;

    }
    
    for (int i = 2; i <= num/2; i++)
    {
       if (num%i == 0)
       {
       count ++;
       break;
       }
       
    }

    if (count == 0)
    {
        printf("number is prime");
    }
    else
    printf("number is not prime");



    getch();
}