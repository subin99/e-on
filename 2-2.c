#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[10];
void function_arr(int iValue)
{
    
    static int k = 0;
    int i = 0;
    switch (iValue)
    {
        case 1:
        { printf("숫자를 입력하세요 : ");
            scanf("%d", &arr[k]);
            ++k;
        }
            break;
        case 2:
        {
            arr[--k] = 0;}
            break;
        case 3:
            for (i = 1; i <= k;i++)
            {
                printf("%d ", arr[i - 1]);
            }printf("\n");
            break;
    }
}
int main(void)
{
    int iValue;
    
    printf("PUSH : 1\n");
    printf("POP  : 2\n");
    printf("SHOW : 3\n");
    printf("(종료하려면 1,2,3 이외의 숫자 입력)\n\n\n");
    while (1) {
        printf("메뉴를 선택하세요 : ");
        scanf("%d", &iValue);
        if (iValue == 1 || iValue == 2 || iValue == 3)
        {
            function_arr(iValue);
        }
        else {
            printf("프로그램 종료\n");
            break;
        }
    }
}
