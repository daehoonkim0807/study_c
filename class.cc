#include <iostream>
#include <string>

class Person{
    
private:
    float m_weight;
protected:

    string m_bloodtype;


public:
    int m_number_of_family;
    int getBMI(){
        return m_weight * m_height * 0.79;
    }
    void setPerson(float weight, float height, std::string bloodtype){
        m_weight = weight;
        m_height = height;
        m_bloodtype = bloodtype;
    }
    void show
    //numberOfFamily; // camel case 함수명
    //number_of_family; // hungarian 변수명
    
};

int main()
{
    Person me;
    me.setPerson(50.0, 150.0, "AB");
    
    std::cout << "BMI: " << me.getBMI() << std::endl;
    
}