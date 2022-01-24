#ifndef GELIRMIKTARIISLEMI_H
#define GELIRMIKTARIISLEMI_H

#include "veriler/islemdeposu.h"

class gelirmiktariislemi
{
public:
    gelirmiktariislemi(islemdeposu &d);
    void Al();
private:
    islemdeposu &depo;
};

#endif // GELIRMIKTARIISLEMI_H
