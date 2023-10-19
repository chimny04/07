#include <stdio.h>
#include <stdlib.h>

void f(void);

// int i; 전역 변수로 설정시에는 # 10개만 출력 

int main(void)
{
    int i;
    for(i=0; i<5; i++)
    {
        f();
    }
    
    system("PAUSE");	
    return 0;
}

void f(void)
{
    int i;
    for(i=0; i<10; i++)
        printf("#");   
}
