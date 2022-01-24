#ifndef ISLEMDEPOSU_H
#define ISLEMDEPOSU_H

#include <vector>
#include <veriler/gelirmiktariverisi.h>
#include <veriler/gidermiktariverisi.h>

using namespace std;

class islemdeposu
{
public:
    islemdeposu();

    void paraAl(gelirmiktariverisi &veri);
    void paraCikar(gidermiktariverisi &veri);

    double kasayagirenmiktar(string barkod);
    double kasadancikanmiktar(string barkod);

    double bakiye(string barkod);

private:
    vector<gidermiktariverisi> gidermiktariVerileri;
    vector<gelirmiktariverisi> gelirmiktariVerileri;

    friend class kasahareketleri;

};

#endif // ISLEMDEPOSU_H
