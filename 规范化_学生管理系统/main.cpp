#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "Struct_Stu.h"
#include "Menu.h"
#include "Stu_Initialize.h"
#include "Stu_Initialize_Add.h"
#include "Stu_Change.h"
#include "Stu_Remove.h"
#include "Stu_Examine.h"
#include "Stu_Add.h"
#include "Stu_Search.h"
#include "Stu_insertion.h"
#include "Stu_Save.h"
#include "Stu_read.h"
#include "Stu_Sort.h"

int main()
{
	Stu* Head = Initialize();
	int Program_exit = 0;//初始化头结点

	while (Program_exit>=0)
	{
		Menu();//菜单
		//-----------------------按键检测------------------------------------------------
		int function = 0;//用来接收功能
		scanf("%d", &function);
		switch (function)
		{
		case 1:
			system("cls");
			//遍历
			Stu_Examine(Head);
			break;
		case 2:
			system("cls");
			//初始化添加
			Stu_Initialize_Add(Head);						
			break;
		case 3:
			system("cls");
			//添加
			Stu_Examine(Head);
			Stu_Add(Head);
			
			break;
		case 4:
			system("cls");
			Stu_Examine(Head);
			//删除
			Stu_Remove(Head);
			break;
		case 5:
			system("cls");
			//替换
			Stu_Examine(Head);
			Stu_Changge(Head);
			break;
		case 6:
			system("cls");
			//插入
			Stu_Examine(Head);
			Stu_insertion(Head);
			
			break;
		case 7:
			system("cls");
			//保存
			Stu_Examine(Head);
			Stu_Save(Head);
			
			
			break;
		case 8:
			system("cls");
			//读取
			Stu_Examine(Head);
			Stu_read(Head);
			break;
		case 9:
			system("cls");
			//搜索
			Stu_Examine(Head);
			Stu_Search(Head);
			break;
		case 10:
			system("cls");
			//排序
			
			Stu_Sort(Head);
			Stu_Examine(Head);
			break;

		default:
			printf("\n           非法输入         \n\n");
			break;
		}
		//-----------------------------------------------------------
		printf("____输入任意键继续____\n");
		scanf("%d", &Program_exit);
		system("cls");

	}




	return 0;
}
