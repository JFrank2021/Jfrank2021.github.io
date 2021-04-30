#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <string>
#include "Arme.h"

class Person{
public:

    Person();
    ~Person();
    void received_damage(int number_damage);
    //void attack(Person &target);
    void attack_with_mana(Person &target);
    void health_drink(int volume_drink);
    void to_change_arm();
    bool still_alive()const;
    //void show_person() const;
    bool equals(Person const& target)const;
    bool operator==(Person const& target);
    bool smallerthan(Person const& target)const;
    bool operator<(Person const& target);
    bool biggerthan(Person const& target)const;
    bool operator>(Person const& target);
    void set_name(std::string name);
    std::string get_name();
    int get_level_health();

protected:

    std::string m_name;
    int m_level_health;
    int m_mana;
    //Arme m_arme;
       //create class m_fatal
    //maybe class time
};


#endif // PERSON_H_INCLUDED
