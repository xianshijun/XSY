#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//c���Ա�׼ͷ�ļ�
#include<stdlib.h>//���Կ��Ƽ����ָ���ͷ�ļ�
#include "Stu_Initialize.h"

Stu* Initialize()
{
    Stu* Head = (Stu*)malloc(sizeof(Stu));//����ָ��You2
    if (Head == NULL)
    {
        printf("**********�ܲ����ˣ���ʼ��ʧ��***********\n");
        return 0;
    }
    Head->next = NULL;
    printf("----------------------------��ʼ�����----------------------------\n");
    return Head;
}
