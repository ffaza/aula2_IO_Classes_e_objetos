#include<iostream>
#include "Pessoa.hpp"
#include "Pessoa.cpp"
#include "Retangulo.cpp"

using namespace std;



int main()
{
    
    
    Pessoa pessoa1;
    pessoa1.ler_dados(pessoa1);
    pessoa1.printar_dados(pessoa1);
    
    int area;
    Retangulo retangulo1;
    retangulo1.x=1;
    retangulo1.y=3;
    area=retangulo1.area(retangulo1);
    cout<<area<<endl;
    
    return 0;
}