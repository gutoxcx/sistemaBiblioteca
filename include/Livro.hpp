#ifndef LIVRO_HPP
#define LIVRO_HPP

#include <iostream>
#include <string>

using namespace std;

class Livro {
private:
    int idLivro;
    string tituloLivro;
    string autorLivro;
    bool isDisponivel = false;
};