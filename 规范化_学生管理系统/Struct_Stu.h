#pragma once
#include <stdio.h>

typedef struct student_information//ѧ����Ϣ�Ľṹ��
{

	int Id;//ѧ��ѧ��
	char Name[20];//ѧ������
	char Gender[10];//�Ա�
	int Chinese;//���ĳɼ�
	int Mthematics;//��ѧ�ɼ�
	int EngLish;//Ӣ��ɼ�
	struct student_information* next;//ָ��ָ����һ�����

}Stu;

int total_points(Stu* Head);