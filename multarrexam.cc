#include <iostream>

int main(){
    int arr[5][5];
    int index = 5;
    int num = 1;
    while(1){
        if (index == 5){
            for(int i =0; i < index; i++){
                arr[0][i] = num;
                num++;
            }
        index -= 1;
        }
        else if(index==4){
            for(int i = 0 ; i < index; i++)
            {
                arr[i + 1][index] = num;
                num++;
            }
            for(int i = index; i > 0 ; i--)
            {
                arr[index][i - 1] = num;
                num++;
            }
        index -= 1;
        }
        else if(index == 3){
            for(int i = index;i > 0;i--)
            {
                arr[i][0] = num;
                num++;
            }
            for(int i = 0; i < index; i++)
            {
                arr[1][i + 1] = num;
                num++;
            }
        index -= 1;    
        }
        else if(index == 2){
            for(int i = 0; i < index; i++){
                arr[i+2][3] = num;
                num++;
            }
            for(int i = index; i > 0; i--)
            {
                arr[3][i] = num;
                num++;
            }
        index -= 1;
        }
        else if(index == 1){
            arr[2][1] = num;
            num++;
            arr[2][2] = num;
            break;
        }
    }
    /*
    for (int i = 0; i < 5; i++)
    {
        for(int j =0; j<5;j++)
        {
            std::cout<<arr[i][j];    
        }
        std::cout<<std::endl;
    }
    */
    
    
    return 0;
}



