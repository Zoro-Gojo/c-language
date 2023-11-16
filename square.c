#include<stdalign.h>

int main(){
    int n;
    printf("enter the unit of * you want in a square: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
         }
        printf("\n");
    }

    return 0;
}