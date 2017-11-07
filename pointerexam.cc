#include <iostream>

int main(int argc, char** argv)
{
    char str1[] = "My string";
    char *str2 = "Your string";
    
    str1[1] = "Y";
    //str2[1] = "Y";
    
    std::cout << str1 <<std::endl;
    std::cout << str2 <<std::endl;
    
    return 0;
    
}