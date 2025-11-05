#include <iostream>
#include "Livro.hpp"

using namespace std;

Livro::Livro(){};
Livro::Livro(int p_idLivro, string p_tituloLivro, string p_autorLivro) {
    idLivro =  p_idLivro;
    tituloLivro = p_idLivro;
    autorLivro = p_autorLivro;
}