#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Test(int size[], int N, int front, int real)
{
    int a = size[front], index = 0;
    for (int i = front + 1; i <= real; i++)
    {
        if (a < size[i])
        {
            a = size[i], index = i;
        }
    }
    return index;
}

int main(void)
{
    int  N, M, size[100], Index, front, real, now;
    
    printf("입력\n");
    scanf("%d%d", &N, &M);
    front = 0;
    now = 0;
    real = N - 1;
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &size[i]);
    }
    
    while (front - 1 != M)
    {
        Index = Test(size, N, front, real);
        
        for (int i = front; i < Index; i++)
        {
            size[++real] = size[front++];
            M = M == front - 1 ? real : M;
        }
        front++;
        now++;
    }
    printf("입력\n");
    printf("%d\n", now);
    
    return 0;
}
