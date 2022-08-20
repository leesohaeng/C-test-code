#include <stdio.h>

int main() 
{
    char    str[] = "Hello,PC";    // 9byte를 자동으로 할당. 마지막 Null문자 자동추가.
    char   *STR   = "Pointer Test";   // 값을 바꾸지 않고 사용할 경우 

    printf("%s\n",str);
    printf("%s\n",STR);

    // 배열변수로 선언한 str과 pointer변수로 선언한 STR은 어떤 차이일까...

    // 일반 배열변수의 경우 배열값을 바꾸는 것이 가능하다. 
    str[0] = 'X';
    printf("%s\n",str);   

    // pointer형 변수에 문자열을 전달하는 것은 문자열의 주소만 전달하는 것이다. 
    // 주의할 점은 이때 문자열은 '상수'로 취급
    // 상수 : constant -> 변경할 수 없는 값 
    // 만약 문자열 배열값을 바꾸고 싶다면, 반드시 배열로 선언하여 처리하여야 한다. 
    STR[0] = 'X';         // STR에는 Read Olny영역의 주소가 들어 있으므로 
    printf("%s\n",STR);   // 값을 바꾸는것은 불가능. 
    return 0;
}