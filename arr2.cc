#include <iostream>
#include <cstring>

int main(){
    
    char voca[10];
    std::cin >> voca;
    //std::cout << strlen(voca);
    
    char temp;
    
    for (int i = 0; i < strlen(voca)/2; i++){
        temp = voca[i];
        voca[i] = voca[strlen(voca) - (i+1)];
        voca[strlen(voca) - (i+1)] = temp;
    }
    
    std::cout << voca;
    return 0;
}