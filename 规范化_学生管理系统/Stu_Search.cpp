#include "Stu_Search.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Stu_Search(Stu* Head)
{
	Stu* Assist9 = (Stu*)malloc(sizeof(Stu));
	Assist9 = Head->next;
	if (Assist9 == NULL)
	{
		printf("_______________请先输入数据__________________\n");
		return;
	}
	
	char cmp_name[20] = "";
	printf("\t请输入你要查找的学生名字\t\n");
	scanf_s("%s", cmp_name,sizeof(cmp_name));

	while (Assist9!=NULL)
	{
		
		if (strcmp(Assist9->Name,cmp_name)==0)
		{
			printf("______我成功找到了相关学生信息_____\n");
			printf("------------------------------------------------------------\n");
			printf("||\t学号ID\t姓名\t性别 语文成绩 数学成绩 英语成绩\t||\n");
			printf("------------------------------------------------------------\n");
			printf("|| \t%d\t%s\t%s\t%d\t%d\t%d\t||\n", Assist9->Id, Assist9->Name, Assist9->Gender, Assist9->Chinese, Assist9->Mthematics, Assist9->EngLish);
			printf("%s的总分是:%d\n", Assist9->Name, Assist9->Mthematics+Assist9->Chinese+Assist9->EngLish);
			return;
			
		}
		if (Assist9->next == NULL)
		{
			printf("很抱歉没有找到该ID\n");
			return;
		}
		Assist9 = Assist9->next;//指针进入下一个结点

	}
	printf("可恶，我什么都没找到\n");
	return;
}
