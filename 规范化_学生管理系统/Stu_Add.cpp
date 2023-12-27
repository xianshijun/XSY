#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>//c语言标准头文件
#include<stdlib.h>//可以控制计算机指令的头文件
#include<string.h>
#include "Stu_Add.h"


void Stu_Add(Stu* Head)
{
    Stu* Assist4 = (Stu*)malloc(sizeof(Stu));//新结点加载指针
    Assist4 = Head->next;
    int i = 0;
    if (Assist4 == NULL)
    {
        printf("-----------------请先初始输入数据信息--------\n");
        return;
    }
    while (Assist4->next != NULL)
    {
        i++;
        Assist4 = Assist4->next;
    }
    printf("--------当前系统储存了%d个学生的信息-------", i);
    Stu* Assist6 = Assist4;
    int new3_Id = 0;//学生学号
    char new3_Name[20] = "";//学生名字
    char new3_Gender[10] = "";//性别
    int new3_Chinese = 0;//语文成绩
    int new3_Mthematics = 0;//数学成绩
    int new3_EngLish = 0;//英语成绩

    //------------------------------------------------------------
    int cmp = -1;
    while (cmp != 0)
    {

        printf("-------------------------------请输入-------------------------\n");
        printf("||   学号ID  姓名  性别  语文成绩  数学成绩  英语成绩   ||\n");
        printf("------------------------------------------------------------\n");
        printf("学号ID：");
        scanf_s("\t%d", &new3_Id);
        printf("姓名：");
        scanf_s("\t%s", new3_Name, sizeof(new3_Name));
        printf("性别：");
        scanf_s("\t%s", new3_Gender, sizeof(new3_Gender));
        printf("语文成绩：");
        scanf_s("\t%d", &new3_Chinese);
        printf("数学成绩：");
        scanf_s("\t%d", &new3_Gender);
        printf("英语成绩：");
        scanf_s("\t%d", &new3_EngLish);

        Stu* Assist5 = (Stu*)malloc(sizeof(Stu));//新结点指针
        Assist5->next = NULL;

        Assist5->Id = new3_Id;
        strcpy(Assist5->Name, new3_Name);
        strcpy(Assist5->Gender, new3_Gender);
        Assist5->Chinese = new3_Chinese;
        Assist5->Mthematics = new3_Mthematics;
        Assist5->EngLish = new3_EngLish;

        Assist6->next = Assist5;//连接啊!!将next和下一个ID连接
        Assist6 = Assist5;//将辅助指针定义新结点上,更新指针

        printf("--------------如果要退出请输入0，否则任意输入------------\n");
        printf("你的选择是：");
        scanf_s("%d", &cmp);

    }

}

