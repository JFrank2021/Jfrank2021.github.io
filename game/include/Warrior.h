#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>
#include <../Person.h>

class Warrior : public Person
{
    public:
        void attack(Person &target);
        void super_attack(Person &target);
        void to_change_arm();
        void show_person() const;
    private:
        Ax m_arme;//arm of all warrior
};

#endif // WARRIOR_H
