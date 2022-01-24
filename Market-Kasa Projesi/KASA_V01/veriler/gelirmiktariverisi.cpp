#include "gelirmiktariverisi.h"

gelirmiktariverisi::gelirmiktariverisi(string tar, double mik, string barkod)
{
    tarih = tar;
    miktar = mik;
    barkodNo = barkod;
}

string gelirmiktariverisi::getTarih() const
{
    return tarih;
}

void gelirmiktariverisi::setTarih(const string &value)
{
    tarih = value;
}

double gelirmiktariverisi::getMiktar() const
{
    return miktar;
}

void gelirmiktariverisi::setMiktar(double value)
{
    miktar = value;
}

string gelirmiktariverisi::getBarkodNo() const
{
    return barkodNo;
}

void gelirmiktariverisi::setBarkodNo(const string &value)
{
    barkodNo = value;
}
