#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>//c���Ա�׼ͷ�ļ�
#include<stdlib.h>//���Կ��Ƽ����ָ���ͷ�ļ�
#include<string.h>
#include "Stu_Add.h"


void Stu_Add(Stu* Head)
{
    Stu* Assist4 = (Stu*)malloc(sizeof(Stu));//�½�����ָ��
    Assist4 = Head->next;
    int i = 0;
    if (Assist4 == NULL)
    {
        printf("-----------------���ȳ�ʼ����������Ϣ--------\n");
        return;
    }
    while (Assist4->next != NULL)
    {
        i++;
        Assist4 = Assist4->next;
    }
    printf("--------��ǰϵͳ������%d��ѧ������Ϣ-------", i);
    Stu* Assist6 = Assist4;
    int new3_Id = 0;//ѧ��ѧ��
    char new3_Name[20] = "";//ѧ������
    char new3_Gender[10] = "";//�Ա�
    int new3_Chinese = 0;//���ĳɼ�
    int new3_Mthematics = 0;//��ѧ�ɼ�
    int new3_EngLish = 0;//Ӣ��ɼ�

    //------------------------------------------------------------
    int cmp = -1;
    while (cmp != 0)
    {

        printf("-------------------------------������-------------------------\n");
        printf("||   ѧ��ID  ����  �Ա�  ���ĳɼ�  ��ѧ�ɼ�  Ӣ��ɼ�   ||\n");
        printf("------------------------------------------------------------\n");
        printf("ѧ��ID��");
        scanf_s("\t%d", &new3_Id);
        printf("������");
        scanf_s("\t%s", new3_Name, sizeof(new3_Name));
        printf("�Ա�");
        scanf_s("\t%s", new3_Gender, sizeof(new3_Gender));
        printf("���ĳɼ���");
        scanf_s("\t%d", &new3_Chinese);
        printf("��ѧ�ɼ���");
        scanf_s("\t%d", &new3_Gender);
        printf("Ӣ��ɼ���");
        scanf_s("\t%d", &new3_EngLish);

        Stu* Assist5 = (Stu*)malloc(sizeof(Stu));//�½��ָ��
        Assist5->next = NULL;

        Assist5->Id = new3_Id;
        strcpy(Assist5->Name, new3_Name);
        strcpy(Assist5->Gender, new3_Gender);
        Assist5->Chinese = new3_Chinese;
        Assist5->Mthematics = new3_Mthematics;
        Assist5->EngLish = new3_EngLish;

        Assist6->next = Assist5;//���Ӱ�!!��next����һ��ID����
        Assist6 = Assist5;//������ָ�붨���½����,����ָ��

        printf("--------------���Ҫ�˳�������0��������������------------\n");
        printf("���ѡ���ǣ�");
        scanf_s("%d", &cmp);

    }

}

