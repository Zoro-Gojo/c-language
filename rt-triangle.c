#include<stdalign.h>

int main(){
    int n;
    printf("enter the unit of * you want in a rt-triangle:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
         }
        printf("\n");
    }

    return 0;
}