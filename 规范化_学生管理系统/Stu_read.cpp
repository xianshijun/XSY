#define _CRT_SECURE_NO_WARNINGS
#include "Stu_read.h"
#include <stdlib.h>
#include<string.h>

void Stu_read(Stu* Head)
{
    Stu* Assist9 = (Stu*)malloc(sizeof(Stu));//����ָ��
    FILE* r_fp = fopen("Stu.txt", "r");//���ļ���ֻ��
    Assist9 = Head;
    char cmp_FZ = 0;
    while (fgetc(r_fp) != EOF)
    {
        fseek(r_fp, -1, SEEK_CUR);
        int new_Id = 0, new_Chinese = 0, new_Mthematics = 0, new_EngLish = 0;
        char new_Name[20] = "";
        char new_Gender[10] = "";

        int a = fscanf(r_fp, " %d %s %s %d %d %d ", &new_Id, new_Name, new_Gender, &new_Chinese, &new_Mthematics, &new_EngLish);//��������
        printf("------------------------------------------------------------\n");
        printf("|| \t%d\t%s\t%s\t%d\t%d\t%d\t||\n", new_Id, new_Name, new_Gender, new_Chinese, new_Mthematics, new_EngLish);


        Stu* new_JZ = (Stu*)malloc(sizeof(Stu));//�½�����ָ��
        new_JZ->next = NULL;


        new_JZ->Id = new_Id;//�Ѷ������ݸ�ֵ
        strcpy(new_JZ->Name, new_Name);
        strcpy(new_JZ->Gender, new_Gender);
        new_JZ->Chinese = new_Chinese;
        new_JZ->Mthematics= new_Mthematics;
        new_JZ->EngLish = new_EngLish;

        Assist9->next = new_JZ;//���Ӱ�!!��next����һ��ID����
        Assist9 = new_JZ;//����ָ��



    }
    printf("-----------------------��ȡ���---------------------------------\n");
    fclose(r_fp);//�ر��ļ�ָ��
}
