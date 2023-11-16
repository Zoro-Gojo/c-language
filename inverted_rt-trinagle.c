#include<stdalign.h>

int main(){
    int n;
    printf("enter the unit of * you want in an inverted rt-triangle:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n ; j >= i; j--)
        {
            printf("*");
         }
        printf("\n");
    }

    return 0;
}