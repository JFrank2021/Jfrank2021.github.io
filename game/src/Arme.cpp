#include "Arme.h"
using namespace std;
Arme::Arme()//constructor
{
    m_name = "Spear";
    m_damage = 3;
}


void Arme::show()const
{
    cout<<"Arm : "<<m_name<<" (damage : "<<m_damage<<")"<<endl;
}
void Arme::to_change(){

}
int Arme::get_damage() const{
    return m_damage;
}

void Ax::to_change(){//polymorphism
        m_name = "Double trenchant ax of the death";
        m_damage = 6;
    }
void Magic_wand::to_change_2(){
            m_name = "Magic wand";
            m_damage = 5;
}
