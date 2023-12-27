#define _CRT_SECURE_NO_WARNINGS
#include "Stu_insertion.h"
#include <stdlib.h>
#include <string.h>
void Stu_insertion(Stu* Head)
{
    //------------------------------------------------------------
    Stu* Assist_left2 = (Stu*)malloc(sizeof(Stu));//辅助指针Zuo2
    Stu* Assist_right2 = (Stu*)malloc(sizeof(Stu));//辅助指针You2
    Assist_left2 = Head;
    Assist_right2 = Head->next;
    if (Assist_right2 == NULL)//保证已添加学生信息
    {
        printf("----------------请先添加学生信息------------------\n");
        return;
    }
    printf("-------------------请问你要插入到哪个ID的前面------------------\n");
    int Insert = 0;
    scanf_s("%d", &Insert);
    printf("----------------请输入你要插入的数据----------------------\n");
    printf("||   学号ID  姓名  性别  语文成绩  数学成绩  英语成绩   ||\n");
    printf("------------------------------------------------------------\n");
    char cmp_name[20] = "";
    char cmp_Gender[10] = "";
    int cmp_ID = 0, cmp_chinese = 0, cmp_Mthematics = 0, cmp_english = 0;
    printf("学号ID：");
    scanf_s("%d", &cmp_ID);
    printf("姓名：");
    scanf_s("%s", cmp_name, 20);
    printf("性别：");
    scanf_s("%s", cmp_Gender, 10);
    printf("语文成绩：");
    scanf_s("%d", &cmp_chinese);
    printf("数学成绩：");
    scanf_s("%d", &cmp_Mthematics);
    printf("英语成绩：");
    scanf_s("%d", &cmp_english);
    Stu* p_Insert = (Stu*)malloc(sizeof(Stu));//辅助指针You2
    p_Insert->Id = cmp_ID;
    strcpy(p_Insert->Name, cmp_name);
    strcpy(p_Insert->Gender, cmp_Gender);
    p_Insert->Chinese = cmp_chinese;
    p_Insert->Mthematics = cmp_Mthematics;
    p_Insert->EngLish = cmp_english;
    p_Insert->next = NULL;
    while (1)//-----------------------------------------------------
    {

        if (Assist_right2->Id == Insert)
        {
            p_Insert->next = Assist_right2;
            Assist_left2->next = p_Insert;
            printf("已经在%d插入的全部信息\n", Insert);
            return;
        }
        if (Assist_right2->next == NULL)
        {
            printf("很抱歉，没有查询到该ID");
            return;
        }


        Assist_left2 = Assist_right2;
        Assist_right2 = Assist_right2->next;


    }
}
