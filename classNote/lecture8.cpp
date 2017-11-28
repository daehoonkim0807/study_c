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
    void Growing();
    
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
    std::cout  << GetName() << ":" << "Hi, What_is_your_name?" << std::endl;
    other_person.How_old_are_you();
}
void Human::AskAge(Human other_person){
    std::cout<< GetName() << ":" << "How old are you?" << std::endl;
    other_person.How_old_are_you();
}

void Human::What_is_your_name(){
    std::cout << GetName() << " : " << "Hello, I am" << GetName() << std::endl;
}
void Human::How_old_are_you(){
    std::cout << GetName() << " : " << "I am " << GetAge() << "." << std::endl;
}


Human::Human()
{
    age = -1;
    height = 0.0;
    name = "";
}

Human::Human(int Age, double Height, char *Name)
{
    age = Age;
    height = Height;
    name = Name;
}

void Human::Aging()
{
    age++;
}
coid Human::Growing()
{
    height += 0.5;
}

int main(){
    Human gjhong(20, 180, "Hong, Gil Dong");
    Human yhkim(20, 160, "Kim, Young Hee");
    
    std::cout << "Greeting" << std::endl;
    gjhong.AskName(yhkim);
    yhkim.AskName(gjhong);
    gjhong.AskAge(yhkim);
    yhkim.AskAge(gjhong);
}