#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>//c���Ա�׼ͷ�ļ�
#include<stdlib.h>//���Կ��Ƽ����ָ���ͷ�ļ�
#include<string.h>
#include "Stu_Initialize_Add.h"

void Stu_Initialize_Add(Stu* Head)
{

    //-------------------------�½��----------------------------

    Stu* Assist2 = Head;//β��ָ����ʱָ��ͷ���,����ָ��

    int new2_Id=0;//ѧ��ѧ��
    char new2_Name[20]="";//ѧ������
    char new2_Gender[10]="";//�Ա�
    int new2_Chinese=0;//���ĳɼ�
    int new2_Mthematics=0;//��ѧ�ɼ�
    int new2_EngLish=0;//Ӣ��ɼ�

    //------------------------------------------------------------
    int cmp = -1;
    while (cmp != 0)
    {

        printf("-------------------------------������-------------------------\n");
        printf("||   ѧ��ID  ����  �Ա�  ���ĳɼ�  ��ѧ�ɼ�  Ӣ��ɼ�   ||\n");
        printf("------------------------------------------------------------\n");
        printf("ѧ��ID��");
        scanf_s("\t%d", &new2_Id);
        printf("������");
        scanf_s("\t%s", new2_Name, sizeof(new2_Name));
        printf("�Ա�");
        scanf_s("\t%s", new2_Gender, sizeof(new2_Gender));
        printf("���ĳɼ���");
        scanf_s("\t%d", &new2_Chinese);
        printf("��ѧ�ɼ���");
        scanf_s("\t%d", &new2_Mthematics);
        printf("Ӣ��ɼ���");
        scanf_s("\t%d", &new2_EngLish);

        Stu* Assist3 = (Stu*)malloc(sizeof(Stu));//�½��ָ��
        Assist3->next = NULL;

        Assist3->Id = new2_Id;
        strcpy(Assist3->Name, new2_Name);
        strcpy(Assist3->Gender, new2_Gender);
        Assist3->Chinese = new2_Chinese;
        Assist3->Mthematics = new2_Mthematics;
        Assist3->EngLish = new2_EngLish;

        Assist2->next = Assist3;//���Ӱ�!!��next����һ��ID����
        Assist2 = Assist3;//������ָ�붨���½����,����ָ��

        printf("--------------���Ҫ�˳�������0��������������------------\n");
        printf("���ѡ���ǣ�");
        scanf_s("%d", &cmp);

    }
    printf("\n��ʼ������\n");
    return;
}