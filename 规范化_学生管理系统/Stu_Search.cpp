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
		printf("_______________������������__________________\n");
		return;
	}
	
	char cmp_name[20] = "";
	printf("\t��������Ҫ���ҵ�ѧ������\t\n");
	scanf_s("%s", cmp_name,sizeof(cmp_name));

	while (Assist9!=NULL)
	{
		
		if (strcmp(Assist9->Name,cmp_name)==0)
		{
			printf("______�ҳɹ��ҵ������ѧ����Ϣ_____\n");
			printf("------------------------------------------------------------\n");
			printf("||\tѧ��ID\t����\t�Ա� ���ĳɼ� ��ѧ�ɼ� Ӣ��ɼ�\t||\n");
			printf("------------------------------------------------------------\n");
			printf("|| \t%d\t%s\t%s\t%d\t%d\t%d\t||\n", Assist9->Id, Assist9->Name, Assist9->Gender, Assist9->Chinese, Assist9->Mthematics, Assist9->EngLish);
			printf("%s���ܷ���:%d\n", Assist9->Name, Assist9->Mthematics+Assist9->Chinese+Assist9->EngLish);
			return;
			
		}
		if (Assist9->next == NULL)
		{
			printf("�ܱ�Ǹû���ҵ���ID\n");
			return;
		}
		Assist9 = Assist9->next;//ָ�������һ�����

	}
	printf("�ɶ���ʲô��û�ҵ�\n");
	return;
}
