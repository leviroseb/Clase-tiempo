#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

class Time
{
    private:
        int h,m,s;
    public:
        Time(int,int,int);
        string get_hora();
        string get_min();
};

Time::Time(int _h, int _m, int _s)
{
    h=_h;
    m=_m;
    s=_s;
}

string Time::get_hora()
{
    char *cad=new char[3];
    itoa(h,cad,10);
    return string(cad);
}

string Time::get_min()
{
    stringstream s;
    s<<m;
    string min=s.str();
    return min;
}
