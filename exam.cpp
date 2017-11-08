#include <iostream>
#include <iomanip>

/*
void inspect(const void* ptr, size_t nbytes)
{
    
    const unsigned char * p = static_cast<const unsigned char*>(ptr);
    
    std::cout.self(ios::hex, ios::basefield);
    for (int i = 0; )
}
*/


void print(int x)
{
    std::cout << "int: " << x<< std::endl;
    
}

void print(char x)
{
    std::cout << "char : " << x << std::endl;
    
}
void print(double x)
{
    std::cout<< "double: " << x << std::endl;
    
}
//어느특정한 시간에 특정한 시점에 특정한 조건이 만족하면 그 때 전역변수를 선언하고 싶을 때
struct temp{
    int a;
    int b;
    
}

int main()
{
    struct temp* ab = new struct temp;

    ab -> a = 10;
    ab -> b = 20;
    
    int* array = new int [100];
    
    delete ab;//그냥 변수
    delete[] array;
    
    int a = 0;
    int b = 0;
    
    int *ab = new int;
    //integer공간이 할당되고 
    *ab = 100;
    
    
    return 0;
    
}

