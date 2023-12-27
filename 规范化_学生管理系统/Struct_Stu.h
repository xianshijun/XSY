#pragma once
#include <stdio.h>

typedef struct student_information//学生信息的结构体
{

	int Id;//学生学号
	char Name[20];//学生名字
	char Gender[10];//性别
	int Chinese;//语文成绩
	int Mthematics;//数学成绩
	int EngLish;//英语成绩
	struct student_information* next;//指针指向下一个结点

}Stu;

int total_points(Stu* Head);