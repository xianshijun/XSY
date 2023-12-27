#define _CRT_SECURE_NO_WARNINGS
#include "Stu_Sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Stu_Sort(Stu* Head)
{

	Stu* Assist10 = (Stu*)malloc(sizeof(Stu));//新结点指针
	Assist10 = Head->next;
	if (Head->next == NULL)
	{
		
		return;
	}


	Stu* Assist10_left = (Stu*)malloc(sizeof(Stu));//辅助指针左计算轮数
	Stu* Assist10_right = (Stu*)malloc(sizeof(Stu));//辅助指针右

	for (Assist10_left=Head ; Assist10_left->next!=NULL;Assist10_left = Assist10_left->next)
	{
		for (Assist10_right = Assist10_left->next; Assist10_right->next != NULL; Assist10_right = Assist10_right->next)
		{
			if (total_points(Assist10_right) < total_points(Assist10_right->next))//如果下个结点的总分比这个节点大，就交换
			{
				Stu* cmp = Assist10_right->next;

				char cmp_name[20] = "";
				char cmp_Gender[10] = "";
				int cmp_id = Assist10_right->Id;
				strcpy(cmp_name, Assist10_right->Name);
				strcpy(cmp_Gender, Assist10_right->Gender);
				int cmp_chinese = Assist10_right->Chinese;
				int cmp_Mthematics = Assist10_right->Mthematics;
				int cmp_english = Assist10_right->EngLish;

				Assist10_right->Id = cmp->Id;
				strcpy(Assist10_right->Name , cmp->Name);
				strcpy(Assist10_right->Gender, cmp_Gender);
				Assist10_right->Chinese = cmp->Chinese;
				Assist10_right->Mthematics = cmp->Mthematics;
				Assist10_right->EngLish = cmp->EngLish;

				cmp->Id = cmp_id;
				strcpy(cmp->Name, cmp_name);
				strcpy(cmp->Gender, cmp_Gender);
				cmp->Chinese = cmp_chinese;
				cmp->Mthematics = cmp_Mthematics;
				cmp->EngLish = cmp_english;

			}
		}
	}
	int num1 = 0;
	while (Assist10 != NULL)
	{
		num1++;
		printf("____________第%d名 %s的总分是%d  _____________\n", num1,Assist10->Name,total_points(Assist10));
		Assist10 = Assist10->next;
		
	}
	printf("---------------排列完毕------------\n");

}
