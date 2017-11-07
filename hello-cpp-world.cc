#include <iostream>
//void SimpleFunc(int n);
//void SimpleFuncPtr(int* param);
//void Calcul(int* sum, int* multiply);



int main(int argc, char** argv)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    
    std::cout << "ss" << std::endl;
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    for (int i = 0 ; i < 5; i++)
    {
        *(ptr+i) += 2;
    }
    for (int i = 0 ; i < 5; i++)
    {
        std::cout<< arr[i] << std::endl;
    }
    */
    
    /*
    int sum;
    int multiply;
    
  
    Calcul(&sum, &multiply);
    
    std::cout << sum << "\n" << multiply;    
    */
    /*
    int num = 0;
    SimpleFunc(num);
    std::cout << "After SimpleFunc : " << num << std::endl;
    
    SimpleFuncPtr(&num);
    std::cout << "After SimpleFuncPtr: " << num << std::endl;
    */
    
    return 0;
}

void Copy(int arr[]){
    
}


/*
void Calcul(int* sum, int* multiply)
{
    int n1, n2;
    std::cin >> n1 >> n2;
    *sum = n1 + n2;
    *multiply = n1*n2;

}
*/