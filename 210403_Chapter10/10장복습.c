#include <stdio.h>
// 10장 포인터 복습
int main()
{
    int a = 10;
    int* pa; // 포인터 변수 선언(*은 포인터임을 나타내는 기호)
    pa = &a;
    int ary[] = { 1, 2, 3, 4, 5 };
    int* pary = ary;
    int i;

    printf("변수 a에 저장된 값 : %d\n", a);
    printf("변수 a의 주소 : %p\n", &a);
    printf("포인터 변수 pa에 저장된 값 : %p\n", pa);
    printf("변수 a의 저장된 값 : %d\n", *pa); // *은 간접참조연산자

    for (i = 0; i < 5; i++)
    {
        printf("ary[%d] : %d\t\n", i, ary[i]);
        ary[i]++;
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("ary[%d] : %d\t\n", i, pary[i]);
        pary[i]++;
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("ary[%d} = %d\t\n", i, *(pary + i));
    }

    return 0;
}