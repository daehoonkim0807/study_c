#include <iostream>

using namespace std;


class Person{
    public : 
    void Sleep() {cout << "Sleep" << endl;
};

class Student: public Person{
    public : 
        void Study() { cout << "Study" << endl;
};

class Undergraduate : public Student{
    public :
    void Research() { cout << "Research" << endl;
};

int main() {
    Person * p1 = new Person;
    Person * p2 = new Student;
    Person * p3 = new 
}