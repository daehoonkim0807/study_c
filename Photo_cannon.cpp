#include <iostream>
#include <string.h>

using namespace std;

class Phoho_Cannon
{
    int hp, shield;
    int coord_x, coord_y;
    int damage;
public:
    Photon_Cannon(int x, int y);
    Photon_Cannon(const Phoho_Cannon &pc);
    
    void show_status();
};

Phoho_Cannon::Phoho_Cannon(const Phoho_Cannon & pc)
{
    cout << "복사 생성자 호출 !" << endl;
    hp = pc.hp;
    shield  = pc.shield;
    coord_x = pc.coord_x;
    coord_y = pc.coord_y;
    demage = pc.damege;
}

int main()
{
    Phoho_Cannon pc1(3,3);
    Phoho_Cannon pc2(pc1);
    Phoho_Cannon pc3 = pc2;
    
    pc1.show_status();
    pc2.show_status();
    
}