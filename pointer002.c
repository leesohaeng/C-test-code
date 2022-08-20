#include <stdio.h>

int main() 
{
    // 일반변수의 크기는 각각 다른다. 
    char    c = 'Z';
    int     a = 23;
    long    l = 123456L;
    float   f = 3.141592;
    double  d = 3.1415926535;

    // 포인터형 변수는 크기가 같다. 주소를 저장하기때문에 동일.
    char    *C;
    int     *A;
    long    *L;
    float   *F;
    double  *D;

    printf("%lu,%lu,%lu,%lu,%lu\n", 
          sizeof(C), sizeof(A), sizeof(L), sizeof(F),sizeof(D));

    // 일반변수의 주소를 포인터변수에 저장.
    C = &c;
    A = &a;
    L = &l;
    F = &f;
    D = &d;
    printf("%c,%d,%ld,%f,%lf\n",*C,*A,*L,*F,*D);

    return 0;
}