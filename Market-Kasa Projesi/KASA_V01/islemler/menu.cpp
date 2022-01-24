#include "menu.h"

#include "gelirmiktariislemi.h"
#include "gidermiktariislemi.h"
#include "kasahareketleri.h"

#include <iostream>

menu::menu() {}

void menu::calistir()
{
    while(true) {
        int secim;
        cout<< "HOSGELDINIZ" <<endl
            << "BIR ISLEM SECIN "<<endl
            << "[1] GELIRLER "<<endl
            << "[2] GIDERLER "<<endl
            << "[3] KASA HAREKETLERI "<<endl
            << "[4] CIKIS "<<endl
            << "SECIMINIZ ";
        cin>>secim;
        if(secim==1) {
            gelirmiktariislemi islem(depo);
            islem.Al();
        }else if(secim==2) {
            gidermiktariislemi islem(depo);
            islem.cikar();
        }else if(secim==3) {
           kasahareketleri islem(depo);
           islem.Geneldurum();
           islem.Gunlukdurum();
           islem.Aradadurum();
        }else {
            break;
        }
    }
}
