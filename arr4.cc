#include <iostream>
#include <cstring>

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++){
        std::cout << i<< "번째 숫자: ";
        std::cin >> arr[i];
    }
    
    int temp;
    //selection sorting
    for (int i =0; i < 8; i++)
    {
        for(int j = i; j <8;j++)
        {
            min = n[j];
            if(min > n[j])
            {
                min = n[j];
                pos = j;
            }
        }
    }
    
    for (int i = 0; i < 5 - 1; i++){
        for(int j = 0; j < 5 - 1 - i; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        s[i] = min;
        temp = n[pos];
        n[pos] = n[i];
        
    }
    
    for (int i = 0; i < 8; i++){
        std::cout << arr[i];
    }
}