#include <stdio.h>
int main(void)
{
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    printf("입력\n");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    scanf("%d%d%d%d", &x3, &y3, &x4, &y4);
    
    printf("출력\n");
    if ((x1 <= x3&&x3 <= x2) || (x1 <= x4&&x4 <= x2) || (x3 <= x1&&x1 <= x4) || (x3 <= x2&&x2 <= x4))
    {
        if ((y1 <= y3&&y3 <= y2) || (y1 <= y4&&y4 <= y2) || (y3 <= y1&&y1 <= y4) || (y3 <= y2&&y2 <= y4))
            printf("Overlap\n");
        else
            printf("No overlap\n");
    }
    else if ((y1 <= y3&&y3 <= y2) || (y1 <= y4&&y4 <= y2) || (y3 <= y1&&y1 <= y4) || (y3 <= y2&&y2 <= y4))
    {
        if ((x1 <= x3&&x3 <= x2) || (x1 <= x4&&x4 <= x2) || (x3 <= x1&&x1 <= x4) || (x3 <= x2&&x2 <= x4))
            printf("Overlap\n");
        else
            printf("No overlap\n");
    }
    else
        printf("No overlap\n");
    
    return 0;
}


        
