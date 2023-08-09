/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Pessoa.hpp
 * Author: lucia
 *
 * Created on 9 de agosto de 2023, 09:28
 */

#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <iostream>
#include <string>
using namespace std;
class Pessoa {
public:
    string  nome;
    char  cpf[11];
    int idade;
    
    void ler_dados( Pessoa pessoa1);
    void printar_dados(Pessoa pessoa1);
};

#endif /* PESSOA_HPP */

