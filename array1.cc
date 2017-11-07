#include <iostream>

int min(int arr[]);

int main()
{
    int arr[5];
    
    for (int i = 0; i < 5; i++){
        std::cin >> arr[i];
    }
    int max =arr[0];
    int minv;
    int sum = 0;
    
    for (int i = 0; i <5; i++)
    {
        sum += arr[i];
        if (arr[i] > max){
            max = arr[i];
        }
    }
    
    minv = min(arr); 
 
    std::cout << "Min : " << min;
    std::cout << "Max : " << max;
    std::cout << "Sum : " << sum;
    
    return 0;
    
}

int min(int arr[]){
    int min =arr[0];
    for (int i = 0; i <5; i++)
    {
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;   
}