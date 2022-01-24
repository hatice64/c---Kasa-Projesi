#include "kasahareketleri.h"

#include <iomanip>

kasahareketleri::kasahareketleri(islemdeposu &d): depo(d){}

void kasahareketleri::Geneldurum()
{
   cout << "Gelir Durumu" << endl;
   cout << setw(14) << "TARIH" << setw(10) << "FIYAT" << setw(10) << "BARKOD" << endl;

   for(gelirmiktariverisi i: depo.gelirmiktariVerileri) {
       cout << setw(14) <<i.getTarih()
            << setw(10) <<i.getMiktar()
            << setw(10) <<i.getBarkodNo() << endl;
   }
   cout << "Gider Durumu" << endl;
   cout << setw(14) << "TARIH" << setw(10) << "FIYAT" << setw(10) << "BARKOD" << endl;

   for(gidermiktariverisi i: depo.gidermiktariVerileri) {
       cout << setw(14) <<i.getTarih()
            << setw(10) <<i.getMiktar()
            << setw(10) <<i.getBarkodNo() << endl;
   }
}

void kasahareketleri::Gunlukdurum()
{
   string Tarih;

   cout << "Tarih Giriniz: ";
   cin >> Tarih;
   cout << "Bu Tarihte yapilan islemler" << endl;
   cout << endl;
   cout << "Gelir Durumu" << endl;
   cout << setw(14) << " TARIH" << setw(10) << "FIYAT" << setw(10) << "BARKOD" << endl;

   for(gelirmiktariverisi i: depo.gelirmiktariVerileri) {
       if(i.getTarih()==Tarih) {
           cout << setw(14) << i.getTarih()
                << setw(10) << i.getMiktar()
                << setw(10) << i.getBarkodNo() << endl;
       }
   }
}

void kasahareketleri::Aradadurum()
{
    string T1;
    string T2;

    cout << "Ilk Tarihi Giriniz: ";
    cin >> T1;
    cout << " Son Tarihi Giriniz: ";
    cin >> T2;
    cout << "Iki Tarih Arasinda Yapilan Islem" << endl;
    cout << endl;
    cout << "Gelir Durumu" << endl;
    cout << setw(14) << "TARIH" << setw(10) << "FIYAT" << setw(10) << "BARKOD" << endl;

    for(gelirmiktariverisi i: depo.gelirmiktariVerileri) {
        if(i.getTarih() >= T1 &&
                i.getTarih() <= T2 ) {
            cout << setw(14) << i.getTarih()
                 << setw(10) << i.getMiktar()
                 << setw(10) << i.getBarkodNo() << endl;

        }
    }


}







