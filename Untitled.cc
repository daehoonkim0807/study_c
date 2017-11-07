#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
    /*
    std::ofstream outFile; //파일 객체 생성
    outFile.open("a.txt"); // 파일을 open?
    if (outFile == NULL)
    {
        std::cout << "파일 읽기 에러" << std::endl;
        return 1;
    }
    
    for (int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= 9; j++){
            outFile << i << " * " << j << " = " << i*j <<std::endl;
        }
    }
    */
    
    std::ifstream input("a.txt");
    if(input.fail())
    {
        std::cout << "error" << std::endl;
        
    }
    
}