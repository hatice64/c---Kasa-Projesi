#ifndef MENU_H
#define MENU_H

#include "veriler/islemdeposu.h"

class menu
{
public:
    menu();
    void calistir();
private:
    islemdeposu depo;
};

#endif // MENU_H
