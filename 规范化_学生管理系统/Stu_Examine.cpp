#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//c���Ա�׼ͷ�ļ�
#include"Stu_Examine.h"
#include<stdlib.h>//���Կ��Ƽ����ָ���ͷ�ļ�


void Stu_Examine(Stu* Head)
{
    if (Head->next == NULL)
    {
        printf("�㻹û�����ݿ�����ʾ\n");
        return;
    }
    Stu* Assist = (Stu*)malloc(sizeof(Stu));//����ָ��
    Assist = Head->next;
    printf("------------------------------------------------------------\n");
    printf("||\tѧ��ID\t����\t�Ա� ���ĳɼ� ��ѧ�ɼ� Ӣ��ɼ� ||\n");
    while (Assist != NULL)
    {
        printf("------------------------------------------------------------\n");
        printf("|| \t%d\t%s\t%s\t%d\t%d\t%d\t||\n", Assist->Id, Assist->Name, Assist->Gender, Assist->Chinese, Assist->Mthematics, Assist->EngLish);

        //�����¸����
        Assist = Assist->next;
    }
    printf("--------------------------�������-------------------------\n");
    printf("\n");


}