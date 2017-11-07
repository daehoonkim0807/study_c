#include <iostream>

int main(){
    int n[5][5];
    int delta = 1; //왜주는지는 잘모르겟음;
    int size = 5;
    int number = 1;
    int i, j;
    int x = -1, y = 0;
    while(1)
    {
        for(i = 0; i < size; i++)
        {
            x = x + delta;
            n[y][x] = number++;
        }
        size--;
        if(size < 0) break;
        for(i = 0; i < size; i++)
        {
            y = y + delta;
            x = x + delta;
            n[y][x] = number++;
        }
        delta = -delta;
        
    }
    
}