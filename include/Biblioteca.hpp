#ifndef BILBIOTECA_HPP
#define BIBLIOTECA_HPP
#define TAMANHO_BIBLIOTECA 200
#include <iostream>
#include <string>
#include "Livro.hpp"

using namespace std;

class Biblioteca {
private:
    Livro livros[TAMANHO_BIBLIOTECA];
    bool isLivroExistente(string tituloLivro);
public:
    Biblioteca();
    void adicionarLivro(Livro livro);
    void removerLivro(string idLivro);
    void buscarPeloId(int idLivro);
    void buscarPeloAutor(string autor);
    void mostrarAllLivros();
};

#endif