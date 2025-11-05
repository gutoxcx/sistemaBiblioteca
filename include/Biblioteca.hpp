#ifndef BILBIOTECA_HPP
#define BIBLIOTECA_HPP
#include <iostream>
#include <string>
#include "Livro.hpp"

using namespace std;

class Biblioteca {
private:
    Livro livros[200];
    bool isLivroExistente(string tituloLivro);
public:
    Biblioteca();
    void adicionarLivro(Livro livro);
    void removerLivro(string tituloLivro);
    void buscarPeloId(int idLivro);
    void buscarPeloAutor(string autor);
    void mostrarAllLivros();
};

#endif