#include <iostream>
#include "Biblioteca.hpp"
using namespace std;
Biblioteca::Biblioteca(){}

void Biblioteca::getInfoLivro(Livro livro) {
    cout << endl;
    cout << "===== " << livro.getTituloLivro() << " =====" << endl;
    cout << "--- " << livro.getIdLivro() << endl;
    cout << "--- " << livro.getAutorLivro() << endl;
}

bool Biblioteca::isLivroExistente(string tituloLivro) {
    for(int i = 0; i <= indexUltimoLivro; i++) {
        if(livros[i].getTituloLivro() == tituloLivro) {
            return true;
            break;
        }
    } return false;
}

void Biblioteca::adicionarLivro(Livro livro) {
    if(isLivroExistente(livro.getTituloLivro()) == false) {
        livros[indexUltimoLivro] = livro;
        indexUltimoLivro++;
        cout << "Livro adiconado com sucesso!\n";
    } else {
        cout << "O livro já existe no sistema.\n";
    }
}

void Biblioteca::buscarPeloTitulo(string tituloLivro) {
    for(int i = 0; i <= indexUltimoLivro; i++){
        if(livros[i].getTituloLivro() == tituloLivro){
            getInfoLivro(livros[i]);
            break;
        }
    }
}

void Biblioteca::buscarPeloAutor(string autorLivro) {
    for(int i = 0; i <= indexUltimoLivro; i++){
        if(livros[i].getAutorLivro() == autorLivro) {
            getInfoLivro(livros[i]);
            break;
        }
    }
}

void Biblioteca::mostrarTodosOsLivros() {
    for(int i = 0; i < indexUltimoLivro; i++) {
        getInfoLivro(livros[i]);
    }
}