#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//c语言标准头文件
#include"Stu_Examine.h"
#include<stdlib.h>//可以控制计算机指令的头文件


void Stu_Examine(Stu* Head)
{
    if (Head->next == NULL)
    {
        printf("你还没有数据可以显示\n");
        return;
    }
    Stu* Assist = (Stu*)malloc(sizeof(Stu));//辅助指针
    Assist = Head->next;
    printf("------------------------------------------------------------\n");
    printf("||\t学号ID\t姓名\t性别 语文成绩 数学成绩 英语成绩 ||\n");
    while (Assist != NULL)
    {
        printf("------------------------------------------------------------\n");
        printf("|| \t%d\t%s\t%s\t%d\t%d\t%d\t||\n", Assist->Id, Assist->Name, Assist->Gender, Assist->Chinese, Assist->Mthematics, Assist->EngLish);

        //跳到下个结点
        Assist = Assist->next;
    }
    printf("--------------------------遍历完毕-------------------------\n");
    printf("\n");


}