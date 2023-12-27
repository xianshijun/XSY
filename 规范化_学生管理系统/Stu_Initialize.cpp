#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//c语言标准头文件
#include<stdlib.h>//可以控制计算机指令的头文件
#include "Stu_Initialize.h"

Stu* Initialize()
{
    Stu* Head = (Stu*)malloc(sizeof(Stu));//辅助指针You2
    if (Head == NULL)
    {
        printf("**********很不走运，初始化失败***********\n");
        return 0;
    }
    Head->next = NULL;
    printf("----------------------------初始化完毕----------------------------\n");
    return Head;
}
