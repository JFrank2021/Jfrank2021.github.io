#include "Person.h"

using namespace std;

    Person::Person(){
        m_level_health = 50;
        m_mana = 15;
    }
    Person::~Person(){

    }
    void Person::received_damage(int number_damage){
        m_level_health -= number_damage;
        if(m_level_health < 0) //we don't should have level_health negative
        {
            m_level_health = 0;
        }
    }


    void Person::health_drink(int volume_drink){
        m_level_health += volume_drink;
        if(m_level_health > 50){
            m_level_health = 50;//no overstep 50
        }
    }

    bool Person::still_alive()const{
        return m_level_health > 0;//return true if m_level_health > 0 and else false
    }
    void Person::set_name(string name) {
        m_name = name;
    }
    //Take name of objet
    string Person::get_name(){
        return m_name;
    }
    //Take level health of objet
    int Person::get_level_health(){
        return m_level_health;
    }
    //OPERATOR
    bool Person::equals(Person const& target)const{
        return (m_level_health == target.m_level_health);
    }

    bool Person::operator==(Person const& target){
    return equals(target);
    }
    bool Person::smallerthan(Person const& target)const{
        return (m_level_health < target.m_level_health);
    }
    bool Person::operator<(Person const& target){
        return smallerthan(target);
    }
    bool Person::biggerthan(Person const& target)const{
        return (m_level_health > target.m_level_health);
    }
    bool Person::operator>(Person const& target){
        return biggerthan(target);
    }

