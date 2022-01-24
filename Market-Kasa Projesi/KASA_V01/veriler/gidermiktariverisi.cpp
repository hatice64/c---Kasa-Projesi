#include "gidermiktariverisi.h"

gidermiktariverisi::gidermiktariverisi(string tar, double mik, string barkod)
{
    tarih = tar;
    miktar = mik;
    barkodNo = barkod;
}

string gidermiktariverisi::getTarih() const
{
    return tarih;
}

void gidermiktariverisi::setTarih(const string &value)
{
    tarih = value;
}

double gidermiktariverisi::getMiktar() const
{
    return miktar;
}

void gidermiktariverisi::setMiktar(double value)
{
    miktar = value;
}

string gidermiktariverisi::getBarkodNo() const
{
    return barkodNo;
}

void gidermiktariverisi::setBarkodNo(const string &value)
{
    barkodNo = value;
}
