#include "islemdeposu.h"

void islemdeposu::paraAl(gelirmiktariverisi &veri)
{
   gelirmiktariVerileri.push_back(veri);
}
void islemdeposu::paraCikar(gidermiktariverisi &veri)
{
    gidermiktariVerileri.push_back(veri);
}
double islemdeposu::kasayagirenmiktar(string barkod)
{
    double sonuc=0;
    for(auto veri : gelirmiktariVerileri) {
        if(veri.getBarkodNo()==barkod) {
            sonuc += veri.getMiktar();
        }
    }
    return sonuc;
}
double islemdeposu::kasadancikanmiktar(string barkod)
{
    double sonuc=0;
    for(auto veri : gidermiktariVerileri) {
        if(veri.getBarkodNo()==barkod) {
            sonuc += veri.getMiktar();
        }
    }
    return sonuc;
}
double islemdeposu::bakiye(string barkod)
{
    return kasayagirenmiktar(barkod)-
            kasadancikanmiktar(barkod);
}
