#include<stdio.h>
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};

    int sum;


    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    
    printf("%d", sum);
    return 0;
}