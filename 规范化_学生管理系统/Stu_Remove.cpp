#define _CRT_SECURE_NO_WARNINGS
#include "Stu_Remove.h"
#include <stdlib.h>

void Stu_Remove(Stu* Head)
{
    printf("------------------------------------------------------------\n");
    Stu* Assist_left = (Stu*)malloc(sizeof(Stu));//����ָ��
    Stu* Assist_right = (Stu*)malloc(sizeof(Stu));//����ָ��
    Assist_left = Head;
    Assist_right = Head->next;
    if (Head == NULL)//��֤�����ѧ����Ϣ
    {

        printf("\t�������ѧ����Ϣ\t\n");
        printf("------------------------------------------------------------\n");

        return;
    }
    int Remove_ID = -1;
    printf("\t��������Ҫɾ����ѧ��ID\t\n");
    scanf_s("%d", &Remove_ID);
    while (1)
    {
        if (Assist_right->next == NULL)
        {
            if (Assist_right->Id == Remove_ID)
            {
                printf("\t�Ѿ�ɾ��β�����%d��ȫ����Ϣ\t\n", Remove_ID);
                free(Assist_right);//ɾ������ڴ�
                Assist_left->next = NULL;
                printf("------------------------------------------------------------\n");
                return;

            }
            else
            {
                printf("\tmmd,�Ҳ��˰��죬�������û�����ID\t\n");
                printf("------------------------------------------------------------\n");
                return;
            }
        }
        if (Assist_right->Id == Remove_ID)
        {
            Assist_right = Assist_left->next;
            free(Assist_left->next);//ɾ������ڴ�
            Assist_left->next = Assist_right;

            printf("�Ѿ�ɾ���м���%d��ȫ����Ϣ\n", Remove_ID);
            printf("------------------------------------------------------------\n");
            return;
        }
        Assist_left = Assist_right;
        Assist_right = Assist_right->next;


    }






}
