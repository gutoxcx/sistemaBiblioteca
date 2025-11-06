#include <iostream>
#include "Livro.hpp"

using namespace std;

Livro::Livro(){};
Livro::Livro(int p_idLivro, string p_tituloLivro, string p_autorLivro) {
    idLivro =  p_idLivro;
    tituloLivro = p_idLivro;
    autorLivro = p_autorLivro;
}

int Livro::getIdLivro() {
    return idLivro;
}

string Livro::getTituloLivro() {
    return tituloLivro;
}

string Livro::getAutorLivro() {
    return autorLivro;
}
