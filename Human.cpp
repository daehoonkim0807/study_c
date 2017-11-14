#include <iostream>
class Human{
private:
    int age;
    double height;
    char *name;
public:
    Human();
    Human(int, double, char*);
    
    void AskName(Human);
    void AskAge(Human);
    int GetAge();
    char* GetName();
    void What_is_your_name();
    void How_old_are_you();

private:
    void Aging();
    void Growign();
    
};

int Human::GetAge()
{
    return age;
}

char* Human::GetName()
{
    return name;
}

void Human::AskName(Human other_person){
    std::cout  << GetName() << ":" << "Hi, What_is_your_name?" << endl;
    other_person.How_old_are_you();
    
}

