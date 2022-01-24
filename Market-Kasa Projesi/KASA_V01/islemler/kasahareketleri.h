#ifndef KASAHAREKETLERI_H
#define KASAHAREKETLERI_H

#include "islemler/gelirmiktariislemi.h"
#include "islemler/gidermiktariislemi.h"
#include "veriler/islemdeposu.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;


class kasahareketleri
{
public:
    kasahareketleri(islemdeposu &d);

    void Geneldurum();
    void Gunlukdurum();
    void Aradadurum();

private:

    islemdeposu &depo;
};

#endif // KASAHAREKETLERI_H
