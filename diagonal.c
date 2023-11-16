#include<stdalign.h>

int main(){
    int n;
    printf("enter the unit of * you want in a diagonal:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            //use <= for creating rt-triangle
            if (j==i)
            {
            printf("*");
            }
            else
            printf(" ");
            
         }
        printf("\n");
    }

    return 0;
}