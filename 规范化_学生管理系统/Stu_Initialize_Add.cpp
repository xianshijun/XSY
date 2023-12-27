#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>//c语言标准头文件
#include<stdlib.h>//可以控制计算机指令的头文件
#include<string.h>
#include "Stu_Initialize_Add.h"

void Stu_Initialize_Add(Stu* Head)
{

    //-------------------------新结点----------------------------

    Stu* Assist2 = Head;//尾部指针暂时指向头结点,辅助指针

    int new2_Id=0;//学生学号
    char new2_Name[20]="";//学生名字
    char new2_Gender[10]="";//性别
    int new2_Chinese=0;//语文成绩
    int new2_Mthematics=0;//数学成绩
    int new2_EngLish=0;//英语成绩

    //------------------------------------------------------------
    int cmp = -1;
    while (cmp != 0)
    {

        printf("-------------------------------请输入-------------------------\n");
        printf("||   学号ID  姓名  性别  语文成绩  数学成绩  英语成绩   ||\n");
        printf("------------------------------------------------------------\n");
        printf("学号ID：");
        scanf_s("\t%d", &new2_Id);
        printf("姓名：");
        scanf_s("\t%s", new2_Name, sizeof(new2_Name));
        printf("性别：");
        scanf_s("\t%s", new2_Gender, sizeof(new2_Gender));
        printf("语文成绩：");
        scanf_s("\t%d", &new2_Chinese);
        printf("数学成绩：");
        scanf_s("\t%d", &new2_Mthematics);
        printf("英语成绩：");
        scanf_s("\t%d", &new2_EngLish);

        Stu* Assist3 = (Stu*)malloc(sizeof(Stu));//新结点指针
        Assist3->next = NULL;

        Assist3->Id = new2_Id;
        strcpy(Assist3->Name, new2_Name);
        strcpy(Assist3->Gender, new2_Gender);
        Assist3->Chinese = new2_Chinese;
        Assist3->Mthematics = new2_Mthematics;
        Assist3->EngLish = new2_EngLish;

        Assist2->next = Assist3;//连接啊!!将next和下一个ID连接
        Assist2 = Assist3;//将辅助指针定义新结点上,更新指针

        printf("--------------如果要退出请输入0，否则任意输入------------\n");
        printf("你的选择是：");
        scanf_s("%d", &cmp);

    }
    printf("\n初始化结束\n");
    return;
}