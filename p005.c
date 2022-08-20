#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int  *a;

    // OS에게 4,000,000 byte를 Heap Space에 할당 요청.
    a = (int *)malloc(100000000*sizeof(int));
    // 만약 메모리 할당에 실패하면 0x00을 반환 
    if(a==0x00) exit(0);
    printf("\n할당된 메모리의 시작 주소 : %p\n\n",a);

    free(a);
    return 0;
}