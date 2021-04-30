#include "Magician.h"
using namespace std;
void Magician::fireball(Person &target){
        if(m_mana > 24){
           target.received_damage(25);
           m_mana = 0;//return mana to 0 after fatal attack
        }
        else{
            cout<<"Impossible to attack with mana. Your mana have to be superior to 25"<<endl;
        }
    }
void Magician::to_change_arm(){
        m_arme.to_change_2();
    }
void Magician::attack(Person &target){
        target.received_damage(m_arme.get_damage());
        m_mana += 5; //Every time we attack, to increase mana for 5
    }
void Magician::show_person() const{
        cout<<m_name<<endl;
        cout<<"Level health : "<<m_level_health<<endl;
        cout<<"Mana : " <<m_mana<<endl;
        m_arme.show();//display us feature of arm
    }
