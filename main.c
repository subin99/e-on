#include<stdio.h>

void palindrome(char word[])
{
    int front,  test= 0;
    int len;
    len = strlen(word);
    
    for (front = 0; front < len / 2; front++)
    {
        if (word[front] != word[len - 1 - front])
        {
            test = 1;
        }
    }
    if (test == 0)
    {
        printf("회문입니다. \n\n");
    }
    else
    {
        printf("회문이 아닙니다. \n\n");
    }
}
int main()
{
    char word[100];
    
    printf("문자열을 입력하세요 :");
    gets(word);
    palindrome(word);
}
