#include <iostream>

using namespace std;

class SoBase
{
private :
    int baseNum;
public :
    SoBase(int n) : baseNum(n)
    {
        cout << "Sobase() : "<< baseNum << endl;
    }
    ~Sobase()
    {
        cout << "~Sobase() : " << baseNum << endl;
    }
};

class SoDerived
{
private :
    int derivNum;
public :
    SoDerived(int n) : Sobase(n), derivNum(n)
    {
        cout << "SoDerived()"
    }
}