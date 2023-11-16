#include<stdalign.h>

int main(){
    int n;
    printf("enter the unit of * you want in a diagonal:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            //use >= for creating inverted_rt-triangle
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