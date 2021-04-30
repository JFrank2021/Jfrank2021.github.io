#ifndef ARME_H
#define ARME_H

#include <iostream>
#include <string>

class Arme
{
    public:
        Arme();

        void show() const;
        int get_damage()const;
      virtual void to_change();
    protected:
        std::string m_name;
        int m_damage;
};
class Ax : public Arme{
public:

    virtual void to_change();

};
class Magic_wand : public Arme{
public:
    virtual void to_change_2();
};

#endif // ARME_H
