#include <iostream>
#include <cstring>
using namespace std;

#define MAX 10


class record
{
private :
    char name[MAX];

private :
    int course1, course2;
    double avg;
public:
    record()
    void print(void);
}

record::record(){
    strcpy(name, "");
    course1 = course2 = 100;
    avg = 100;
}


int main(){
    record yourRecord = {"HONG GD", 100, 100};
    yourRecord.print();
    
    record myRecord = record::record();
    myRecord.print();
    return 0;
}