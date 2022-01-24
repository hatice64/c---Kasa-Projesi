#include "gidermiktariislemi.h"

#include <iostream>
#include <string>
#include "veriler/gidermiktariverisi.h"

using namespace std;

gidermiktariislemi::gidermiktariislemi(islemdeposu &d) : depo(d) {}

void gidermiktariislemi::cikar()
{
    string barkodNo;
    double miktar;
    string tarih;

    cout<<"Barkod Numarasi : ";
    cin>>barkodNo;

    double bakiye = depo.bakiye(barkodNo);

    cout<<"Kasadaki Para : "<<bakiye<<endl;
    cout<<"Gider Miktari   : ";
    cin>>miktar;
    while(miktar>bakiye) {
        cerr<<"Kasada Yeterli Para Yok..."<<endl;
        cout<<"Gider Miktari : ";
        cin>>miktar;
        if(miktar<0)
            return;
    }
    cout<<"Tarih           : ";
    cin>>tarih;

    gidermiktariverisi gmv(tarih, miktar, barkodNo);
    depo.paraCikar(gmv);
}
