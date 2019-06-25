#include <stdio.h>

void pal(char* ptr, int len){
    
    int count = 0;
    
    for (int i = 0; i < len / 2; i++)
    {
        if (ptr[i] == ptr[len - i - 1])
            count++;
        else{
            printf("회문이 아닙니다.");
            break;
        }
    }

    if (count == len / 2)
        printf("회문입니다.");
}

int leng(char* ptr){
    
    int leng = 0;
  
    while (ptr[leng] != '\0')
        leng++;
    
    return leng;
    
}

int main(void){
    
    char str[100];
    int length;
    
    printf("문자열 입력 : ");
    scanf("%s", str,100);
    
    length = leng(str);
    pal(str, length);
    
    printf("\n");
    
    return 0;
    
}
