#define _CRT_SECURE_NO_WARNINGS
#include "Stu_Change.h"
#include <stdlib.h>

void Stu_Changge(Stu* Head)
{
    Stu* p_Change = (Stu*)malloc(sizeof(Stu));//辅助指针
    p_Change = Head->next;
    if (p_Change == NULL)//保证已添加学生信息
    {
        printf("请先添加学生信息\n");
        return;
    }
    int Change_ID = -1;
    printf("请输入你要更改的学生ID\n");
    scanf_s("%d", &Change_ID);
    while (p_Change != NULL)
    {
        if (p_Change->Id == Change_ID)
        {
            printf("很好，我找到了\n");
            printf("原来的ID是%d,姓名是：%s,性别是：%s,语文成绩是：%d，数学成绩是：%d,英语成绩是：%d\n", p_Change->Id, p_Change->Name, p_Change->Gender, p_Change->Chinese, p_Change->Mthematics, p_Change->EngLish);
            printf("请输入你要修改后的值\n");
            scanf_s("%d", &p_Change->Id);
            scanf_s("%s", p_Change->Name, 20);
            scanf_s("%s", p_Change->Gender, 10);
            scanf_s("%d", &p_Change->Chinese);
            scanf_s("%d", &p_Change->Mthematics);
            scanf_s("%d", &p_Change->EngLish);
            return;
        }
        if (p_Change->next == NULL)
        {
            printf("很抱歉没有找到该ID\n");
            return;
        }
        p_Change = p_Change->next;//跳到下一个结点

    }
}
