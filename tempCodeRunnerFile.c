#include <stdio.h>

int main() 
{
    char    str[] = "Hello,PC~";
    char   *STR;

    STR = str;    // 배열명이 배열의 주소를 의미하므로 배열명만 쓰는 것을 권장. 

    printf("%p,%p\n",STR,str);
    printf("%c,%c\n",str[0],STR[0]);

    return 0;
}
