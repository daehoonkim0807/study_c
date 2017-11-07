#include <iostream>
#include <time.h>

#define MAX 10000000 // 매크로 사용해서 풀기

void monteCircle(double *pi);

int main(void){
    double pi = 0;
    
    srand((double)time(NULL));
    
    while(1)
    {
        monteCircle(&pi);
        
        std::cout << pi <<std::endl;
    }
    return 0;
    
}

void monteCircle(double *pi)
{
    double x,y;
    int cnt = 0;
    // 1 이하의 전달 실 수 구하는 방법
    // x = (double)rand()/ (double)RAND_MAX;
    
    for (int i =0; i < MAX; i++)
    {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;
        
        if ((x*x)+(y*y) <= 1)
        cnt++;
    }
    *pi = (double(cnt)/double(MAX)) * 4;    
}