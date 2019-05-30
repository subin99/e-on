#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
      int iCount, iValue;
      printf("홀수를 입력하세요 : ");
      scanf("%d",&iValue);
      
      for(iCount = 1; iCount<=iValue/2+1; iCount++)
      {
            for(int a= iValue/2 -iCount + 1; a>0; a--)
            {
                  printf(" ");
            }
                  
            for(int b= 1; b <= iCount*2 - 1; b++)
            {
                  printf("*");
            }
      printf("\n");
      }
      for(iCount = 1; iCount <=iValue/2; iCount++)
      {
            for(int c = 1; c<= iCount; c++)
            {
                  printf(" ");
            }
            for (int d =iValue -2 * iCount;d>0; d--)
            {
                  printf("*");
            }
            printf("\n");
      }
}

