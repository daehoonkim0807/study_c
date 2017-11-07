#include <iostream>
#include <fstream>

int main(int argc, char ** argv)
{
    
    std::ifstream input("newFile.txt");
    int sum = 0, num;
    if(input.fail())
    {
        std::cout <<"error" << std::endl;
        return 1;
    }
    
    while(!input.eof())
    {
        input >> num;
        sum+=num;
    }
    std::cout <<sum << std::endl;
    return 0;
    aks
    /*
    //파일 만들기
    std::ifstream inputFile("newFile.txt");
    char message[80];
    if(inputFile==NULL)
    {
        std::cout <<"파일 열기 에러" <<std::endl;
        return 1;
    }
    inputFile >> message;
    std::cout << message << std::endl;
    inputFile.close();
    */
    /*
    std::ofstream outFile;
    outFile.open("newFile.txt");
    
    if(outFile ==NULL)
    {
        std::cout <<"파일 열기 에러" << std::endl;
        return 1;
    }
    
    outFile << "Hi everyone!!" << std::endl;
    outFile.close();
    */
    
    /*
    int originalNum = 123456789;
    char* ptr = (char*)&originalNum
    */

    return 0;

}