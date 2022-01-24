#include "gelirmiktariislemi.h"

#include <iostream>
#include <string>
#include "veriler/gelirmiktariverisi.h"

using namespace std;

gelirmiktariislemi::gelirmiktariislemi(islemdeposu &d) : depo(d) {}

void gelirmiktariislemi::Al()
{
    string barkodNo;
    double miktar;
    string tarih;

    cout<<"Barkod Numarasi : ";
    cin>>barkodNo;
    cout<<"Gelir Miktari   : ";
    cin>>miktar;
    cout<<"Tarih           : ";
    cin>>tarih;

    gelirmiktariverisi gmv(tarih, miktar, barkodNo);
    depo.paraAl(gmv);
}
