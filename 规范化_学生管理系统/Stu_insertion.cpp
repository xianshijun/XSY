#define _CRT_SECURE_NO_WARNINGS
#include "Stu_insertion.h"
#include <stdlib.h>
#include <string.h>
void Stu_insertion(Stu* Head)
{
    //------------------------------------------------------------
    Stu* Assist_left2 = (Stu*)malloc(sizeof(Stu));//����ָ��Zuo2
    Stu* Assist_right2 = (Stu*)malloc(sizeof(Stu));//����ָ��You2
    Assist_left2 = Head;
    Assist_right2 = Head->next;
    if (Assist_right2 == NULL)//��֤�����ѧ����Ϣ
    {
        printf("----------------�������ѧ����Ϣ------------------\n");
        return;
    }
    printf("-------------------������Ҫ���뵽�ĸ�ID��ǰ��------------------\n");
    int Insert = 0;
    scanf_s("%d", &Insert);
    printf("----------------��������Ҫ���������----------------------\n");
    printf("||   ѧ��ID  ����  �Ա�  ���ĳɼ�  ��ѧ�ɼ�  Ӣ��ɼ�   ||\n");
    printf("------------------------------------------------------------\n");
    char cmp_name[20] = "";
    char cmp_Gender[10] = "";
    int cmp_ID = 0, cmp_chinese = 0, cmp_Mthematics = 0, cmp_english = 0;
    printf("ѧ��ID��");
    scanf_s("%d", &cmp_ID);
    printf("������");
    scanf_s("%s", cmp_name, 20);
    printf("�Ա�");
    scanf_s("%s", cmp_Gender, 10);
    printf("���ĳɼ���");
    scanf_s("%d", &cmp_chinese);
    printf("��ѧ�ɼ���");
    scanf_s("%d", &cmp_Mthematics);
    printf("Ӣ��ɼ���");
    scanf_s("%d", &cmp_english);
    Stu* p_Insert = (Stu*)malloc(sizeof(Stu));//����ָ��You2
    p_Insert->Id = cmp_ID;
    strcpy(p_Insert->Name, cmp_name);
    strcpy(p_Insert->Gender, cmp_Gender);
    p_Insert->Chinese = cmp_chinese;
    p_Insert->Mthematics = cmp_Mthematics;
    p_Insert->EngLish = cmp_english;
    p_Insert->next = NULL;
    while (1)//-----------------------------------------------------
    {

        if (Assist_right2->Id == Insert)
        {
            p_Insert->next = Assist_right2;
            Assist_left2->next = p_Insert;
            printf("�Ѿ���%d�����ȫ����Ϣ\n", Insert);
            return;
        }
        if (Assist_right2->next == NULL)
        {
            printf("�ܱ�Ǹ��û�в�ѯ����ID");
            return;
        }


        Assist_left2 = Assist_right2;
        Assist_right2 = Assist_right2->next;


    }
}
