#include "Struct_Stu.h"

int total_points(Stu* Head)//用来统计总分
{
    int num = Head->Chinese + Head->Mthematics + Head->EngLish;
    return num;
}
