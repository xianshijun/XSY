#include "Struct_Stu.h"

int total_points(Stu* Head)//����ͳ���ܷ�
{
    int num = Head->Chinese + Head->Mthematics + Head->EngLish;
    return num;
}
