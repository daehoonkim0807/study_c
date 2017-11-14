class Student
{
    private:
        int age; // 정수 공간 할당 4byte,프로그램이 실행되지 않아도 실행되더라도 고정??
        char* name; //이름을 동적 할당 -> char*공간 프로그램이 실행되지 x 4byte 실행되어 값이 결정될 수 있다. 
    
    public :
        Student() // default constructor 아무것도 안써주면 예)Student var1;
        {
            name = NULL;
            //name = nullptr;
            age = 10;
            
        }
}