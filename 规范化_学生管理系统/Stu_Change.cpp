#define _CRT_SECURE_NO_WARNINGS
#include "Stu_Change.h"
#include <stdlib.h>

void Stu_Changge(Stu* Head)
{
    Stu* p_Change = (Stu*)malloc(sizeof(Stu));//����ָ��
    p_Change = Head->next;
    if (p_Change == NULL)//��֤�����ѧ����Ϣ
    {
        printf("�������ѧ����Ϣ\n");
        return;
    }
    int Change_ID = -1;
    printf("��������Ҫ���ĵ�ѧ��ID\n");
    scanf_s("%d", &Change_ID);
    while (p_Change != NULL)
    {
        if (p_Change->Id == Change_ID)
        {
            printf("�ܺã����ҵ���\n");
            printf("ԭ����ID��%d,�����ǣ�%s,�Ա��ǣ�%s,���ĳɼ��ǣ�%d����ѧ�ɼ��ǣ�%d,Ӣ��ɼ��ǣ�%d\n", p_Change->Id, p_Change->Name, p_Change->Gender, p_Change->Chinese, p_Change->Mthematics, p_Change->EngLish);
            printf("��������Ҫ�޸ĺ��ֵ\n");
            scanf_s("%d", &p_Change->Id);
            scanf_s("%s", p_Change->Name, 20);
            scanf_s("%s", p_Change->Gender, 10);
            scanf_s("%d", &p_Change->Chinese);
            scanf_s("%d", &p_Change->Mthematics);
            scanf_s("%d", &p_Change->EngLish);
            return;
        }
        if (p_Change->next == NULL)
        {
            printf("�ܱ�Ǹû���ҵ���ID\n");
            return;
        }
        p_Change = p_Change->next;//������һ�����

    }
}
