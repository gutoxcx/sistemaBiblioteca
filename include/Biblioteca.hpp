#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include <iostream>
#include <string>
#include "Livro.hpp"

using namespace std;

class Biblioteca {
private:
    Livro livros[200];
    void getInfoLivro(Livro livro);
    int indexUltimoLivro = 0;
    bool isLivroExistente(string tituloLivro);
public:
    Biblioteca();
    void adicionarLivro(Livro livro);
    void buscarPeloTitulo(string tituloLivro);
    void buscarPeloAutor(string autor);
    void mostrarTodosOsLivros();
};

#endif