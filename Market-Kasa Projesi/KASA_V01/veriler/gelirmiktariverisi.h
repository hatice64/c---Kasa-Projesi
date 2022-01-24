#ifndef GELIRMIKTARIVERISI_H
#define GELIRMIKTARIVERISI_H

#include <string>

using namespace std;

class gelirmiktariverisi
{
public:
    gelirmiktariverisi(string tar="1980-01-01",
                       double mik=0.0,
                       string barkod="");

    string getTarih() const;
    void setTarih(const string &value);

    double getMiktar() const;
    void setMiktar(double value);

    string getBarkodNo() const;
    void setBarkodNo(const string &value);

private:
    string tarih;
    double miktar;
    string barkodNo;
};

#endif // GELIRMIKTARIVERISI_H
