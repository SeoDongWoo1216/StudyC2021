// Line 구조체 선언

#ifndef _LINE_H_
#define _LINE_H_ 
#include "19-10_point.h"  // Point 구조체를 쓰기위해 포함

typedef struct
{
	Point first;    // 첫번째 점
	Point second;   // 두번째 점
}Line;

#endif