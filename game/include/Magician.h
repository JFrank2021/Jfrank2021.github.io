#ifndef MAGICIAN_H
#define MAGICIAN_H

#include <iostream>
#include <string>
#include <../Person.h>

class Magician : public Person{
    public:
        void fireball(Person &target);
        void to_change_arm();
        void attack(Person &target);
        void show_person() const;
    private:
        Magic_wand m_arme;
};

#endif // MAGICIAN_H
