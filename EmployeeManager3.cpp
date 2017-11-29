#include <iostream>
#include <cstring>

using namespace std;


class Employee
{
private :
    char name[100];
public :
    Employee(char *name){
        strcpy(this->name, name);
    }
    void ShowYourName() const // 함수내에서 이름이 변경되는 것은 불가능하다.
    {
        cout << "name : " << name << endl;
    }
};

class PermanentWorker : public Employee
{
private : 
    int salary;
public :
    PermanentWorker(char *name, int money) // 상속할 때 기초클래스에 대한 부분도 생성자를 호출해줄 의무가 있기에 
        :Employee(name), salary(money)
    {}
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: " << GetPay() << endl << endl;
    }
};

class TemporaryWorker : public Employee
{
private :
    int workTime; // 이 달에 일한 시간의 합계
    int payPerHour; //  시간당 급여
public :
    TemporaryWorker(char * name, int pay)
        :Employee(name), workTime(0), payPerHour(pay)
    {}
    
    void AddWorkTime(int time)
    {
        workTime += time;
    }
    int GetPay() const
    {
        workTime * payPerHour;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: " << GetPay() << endl << endl;
    }
}


class EmployeeHandler
{
private :
    Employee* empList[50]; // Employee class를 포인터 객체로하는 배열을 50개 선언하였따.    
    int empNum;
public :
    EmployeeHandler() : empNum(0) // 디폴트 생성자의 초기화 라는점.!
    {}
    void AddEmployee(Employee* emp)
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
        
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        cout << "salary sum: " << sum << endl;
    }
    ~EmployHandler()
    {
        for(int i = 0; i < empNum; i++)
            delete empList[i];
    }
};


int main(void)
{
    //직원 관리를 목적으로 설계된 컨트롤 클래스의 객체생성
    
    EmployeeHandler handler;
    
    //정규직 등록
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
}