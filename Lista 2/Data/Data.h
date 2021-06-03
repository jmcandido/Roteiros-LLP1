#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>

using namespace std;

class Data
{
private:
    int dia;
    int mes;
    int ano;

public:
    Data();
    Data(int, int, int);

    void setDia(int);
    string getDia();

    void setMes(int);
    string getMes();

    void setAno(int);
    string getAno();

    void printData();
    void AvancarDia();

    int getDaysMonth(int mes);

    void MostraData();
};

int Data::getDaysMonth(int mes){
    int q_dia;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        q_dia = 31;
        
    }else if (mes == 2){

        if ((ano % 400 == 0 || ano % 100 != 0) && (ano % 4 == 0))
            q_dia = 29;
        else
            q_dia = 28;
    }
    else
    {
        q_dia = 30;
    }

    return q_dia;
}

Data::Data(int _dia, int _mes, int _ano){

    if (_mes < 1 || _mes > 12){
        cout << "Atributo mês Inválido" << endl;
        mes = 1;
    }else
        mes = _mes;

    if (_dia < 1 || _dia > getDaysMonth(mes)){
        cout << "Atributo dia Inválido" << endl;
        dia = 1;
    }
    else
        dia = _dia;

    if (_ano < 1){
        cout << "Atributo ano Inválido" << endl;
        ano = 1;
    }
    else
        ano = _ano;
}

void Data::setDia(int _dia){
    dia = _dia;
}

string Data::getDia(){
    string d;

    if (dia < 10)
        d = "0" + to_string(dia);
    else
        d = to_string(dia);

    return d;
}

void Data::setMes(int _mes){
    mes = _mes;
}

string Data::getMes(){
    string m;

    if (mes < 10)
        m = "0" + to_string(mes);
    else
        m = to_string(mes);

    return m;
}

void Data::setAno(int _ano){
    ano = _ano;
}

string Data::getAno(){

    string a;
    if (ano < 10){
        a = "0" + to_string(ano);
    }else
        a = to_string(ano);

    return a;
}

void Data::AvancarDia(){
    dia++;

    if (dia > getDaysMonth(mes) && mes != 3){
        dia = 1;
        mes++;

    }else if (dia > getDaysMonth(mes) && mes == 3)
    {
        dia = 1;
        mes++;
    }

    if (mes > 12){
        mes = 1;
        ano++;
    }
    
    return;
}

#endif