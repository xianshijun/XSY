#define _CRT_SECURE_NO_WARNINGS
#include "Stu_Save.h"
#include<string.h>
#include <stdlib.h>

void Stu_Save(Stu* Head)
{
    if (Head->next == NULL)//��֤��ʼ��
    {
        printf("�㻹û�����ݿ��Ա���\n");
        return;
    }
    Stu* Assist8 = (Stu*)malloc(sizeof(Stu));//����ָ��
    Assist8 = Head->next;

    FILE* w_fp = fopen("Stu.txt", "w");//���ļ���дָ��
    if (w_fp == NULL)
    {
        printf("-------------------�ܲ��ң��ļ���ʧ��-----------------\n");
        return;
    }
    while (Assist8 != NULL)
    {
        char cmp_name[20] = "";
        char cmp_xb[10] = "";
        int cmp_id = Assist8->Id;
        strcpy(cmp_name, Assist8->Name);
        strcpy(cmp_xb, Assist8->Gender);
        int cmp_chinese = Assist8->Chinese;
        int cmp_shuxue = Assist8->Mthematics;
        int cmp_english = Assist8->EngLish;
        int b = fprintf(w_fp, " %d %s %s %d %d %d ", cmp_id, cmp_name, cmp_xb, cmp_chinese, cmp_shuxue, cmp_english);

        Assist8 = Assist8->next;
    }
    printf("�����ı����\n");
    fclose(w_fp);//�ر��ļ� 
    return;
}
