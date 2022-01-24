#ifndef GIDERMIKTARIISLEMI_H
#define GIDERMIKTARIISLEMI_H

#include "veriler/islemdeposu.h"

class gidermiktariislemi
{
public:
    gidermiktariislemi(islemdeposu &d);
    void cikar();
private:
    islemdeposu &depo;
};

#endif // GIDERMIKTARIISLEMI_H
