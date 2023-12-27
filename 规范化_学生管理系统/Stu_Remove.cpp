#define _CRT_SECURE_NO_WARNINGS
#include "Stu_Remove.h"
#include <stdlib.h>

void Stu_Remove(Stu* Head)
{
    printf("------------------------------------------------------------\n");
    Stu* Assist_left = (Stu*)malloc(sizeof(Stu));//辅助指针
    Stu* Assist_right = (Stu*)malloc(sizeof(Stu));//辅助指针
    Assist_left = Head;
    Assist_right = Head->next;
    if (Head == NULL)//保证已添加学生信息
    {

        printf("\t请先添加学生信息\t\n");
        printf("------------------------------------------------------------\n");

        return;
    }
    int Remove_ID = -1;
    printf("\t请输入你要删除的学生ID\t\n");
    scanf_s("%d", &Remove_ID);
    while (1)
    {
        if (Assist_right->next == NULL)
        {
            if (Assist_right->Id == Remove_ID)
            {
                printf("\t已经删除尾部结点%d的全部信息\t\n", Remove_ID);
                free(Assist_right);//删除这块内存
                Assist_left->next = NULL;
                printf("------------------------------------------------------------\n");
                return;

            }
            else
            {
                printf("\tmmd,我查了半天，结果发现没有这个ID\t\n");
                printf("------------------------------------------------------------\n");
                return;
            }
        }
        if (Assist_right->Id == Remove_ID)
        {
            Assist_right = Assist_left->next;
            free(Assist_left->next);//删除这块内存
            Assist_left->next = Assist_right;

            printf("已经删除中间结点%d的全部信息\n", Remove_ID);
            printf("------------------------------------------------------------\n");
            return;
        }
        Assist_left = Assist_right;
        Assist_right = Assist_right->next;


    }






}
