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

int main()
{
        int a = 1;
        char b = 'c';
        double c = 3.2f;
        
        
        print(a);
        print(b);
        print(c);
    return 0;
    
}

