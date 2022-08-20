#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW     1000
#define COLUMN    5000

int main()
{
    clock_t start,end;
    double     **a,**b,**c;
    long     i,x,y,z;
    
    // a[10000][50000]
    a = (double **)malloc(sizeof(double *) * ROW);
    for(i=0;i<ROW;i++) a[i] = (double *)malloc(sizeof(double *) *COLUMN);
	if(!a) exit(0);
    // b[50000][10000]
    b = (double **)malloc(sizeof(double *) * COLUMN);
    for(i=0;i<COLUMN;i++) b[i] = (double *)malloc(sizeof(double *) *ROW);
	if(!b) exit(0);

    c = (double **)malloc(sizeof(double *) * ROW);
    for(i=0;i<ROW;i++) c[i] = (double *)calloc( ROW,sizeof(double *));
	if(!c) exit(0);

    // �迭 �ʱ�ȭ
    srand( (int)time(NULL));

    for(x=0;x<ROW;x++)
    {
        for(y=0;y<COLUMN;y++)
        {
            a[x][y] = rand() / (double)32767;
        }
    }
    
    for(x=0;x<COLUMN;x++)
    {
        for(y=0;y<ROW;y++)
        {
            b[x][y] = rand() / (double)32767;
        }
    }

    // MatMul a*b
    printf("Start matrix mul...\n");
    start = clock();
    for(x=0;x<ROW;x++)
    {
        for(y=0;y<ROW;y++)
        {
            for(z=0;z<COLUMN;z++) 
			{
				c[x][y]+=a[x][z]*b[z][y];
			}
        }
    }
    end = clock()-start;
    printf("\n\nSort Time : %lf\n\n",end / (double)CLOCKS_PER_SEC);
    
    free(a);
    free(b);
    free(c);
    return 0;
}
