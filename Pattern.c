#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    for (int i = 0; i < n; i++)
    {
        m=n;
        for (int j = 0; j <n ; j++)
        {
            for (int k = i; k < n; k++)
            {
                printf("%d",m);
            }
            m--;
        }
        printf("\n");
    }
    
}
