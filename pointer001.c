#include <stdio.h>

int main() 
{
    //일반변수
    int     i = 10;
    char    c = 'Q';

    //포인터변수는 주소를 저정한다. 
    // 64비트 운영체제에서는 pointer형 변수의 크기는 64비트(8byte)크기를 갖는다. 
    int     *I;
    char    *C;

    printf("size of int  : %lu\n",sizeof(i));
    printf("size of char : %lu\n",sizeof(c));

    printf("size of *int  : %lu\n",sizeof(I));
    printf("size of *char : %lu\n",sizeof(C));
   
    I = &i;   // 일반변수인 i의 주소인 &i를 사용한다. &i--> i의 주소
    C = &c;
    // 위의 동작은 pointer형 변수에 각각 i,c의 주소를 전달하는 명령. 
    printf("%p,%p\n",&i,I);
    printf("%p,%p\n",&c,C);

    printf("%d,%c\n",i,c);
    // 포인터변수에 들어있는 값을 출력하기위해서는 .... pointer변수명 앞에 *를 붙인다. 
    printf("%d,%c\n",*I,*C);   // *I의 의미는 I가 가르키는 주소내의 값을 의미한다. 

    printf("%p,%p\n",&I,I);
    printf("%p,%p\n",&C,C);

    return 0;
}