#include <iostream>
#include <cstring>

int main(){
    int n[10] = {0, }; //모든 값이 0으로 초기화가 된다.
    int num = 1;
    
    while(num <10 && num >0)
    {
        std::cin >> num;
        if(num < 10 && num >0)
        {
            n[num-1]++;
        }
    }
    for (int i = 0; i < 10; i++){
        std::cout << i << " : " << n[i] << std::endl;
    }
}
