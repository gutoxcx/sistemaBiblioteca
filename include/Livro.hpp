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
public:
    Livro();
    Livro(int idLivro, string nomeLivro, string autorLivro);
    int getIdLivro();
    string getNomeLivro();
    string getAutorLivro();
};

#endif