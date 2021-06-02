#include <iostream>

using namespace std;

int main ()
{
    bool aquat, pred, domest, capaz_v, noturno;

    cin >> aquat >> pred >> domest >> capaz_v >> noturno;


    if(aquat == 0 && pred == 1 && domest == 0 && capaz_v == 1 && noturno == 1)
    {
        cout << "coruja" << endl;

    }else if(aquat == 0 && pred == 0 && domest == 0 && capaz_v == 1 && noturno == 0)
    {
        cout << "pardal" << endl;

    }else if(aquat == 0 && pred == 0 && domest == 1 && capaz_v == 1 && noturno == 0)
    {
        cout << "galinha" << endl;

    }else if(aquat == 0 && pred == 1 && domest == 0 && capaz_v == 0 && noturno == 0)
    {
        cout << "ema" << endl;

    }else if(aquat == 0 && pred == 1 && domest == 0 && capaz_v == 1 && noturno == 0)
    {
        cout << "falcão" << endl;

    }else if(aquat == 1 && pred == 0 && domest == 0 && capaz_v == 1 && noturno == 0)
    {
        cout << "pato" << endl;

    }else if(aquat == 1 && pred == 1 && domest == 0 && capaz_v == 0 && noturno == 0)
    {
        cout << "pinguim" << endl;

    }else if(aquat == 1 && pred == 1 && domest == 0 && capaz_v == 1 && noturno == 0)
    {
        cout << "gaivota" << endl;

    }else if(aquat == 1 && pred == 1 && domest == 0 && capaz_v == 1 && noturno == 1)
    {
        cout << "garça" << endl;

    }else if(aquat == 0 && pred == 0 && domest == 0 && capaz_v == 0 && noturno == 0)
    {
        cout << "avestruz" << endl;
    }
}