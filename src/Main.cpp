#include <iostream>
#include <string>
#include "Biblioteca.hpp"
#include "Livro.hpp"

using namespace std;

int main() {
    cout << "=== BEM-VINDO AO SISTEMA DA BIBLIOTECA === \n";
    int opcaoMenu;
    Biblioteca bib;

    while(true) {
        cout << "--- OPÇÕES:\n";
        cout << "[ 1 ] Adicionar livro\n";
        cout << "[ 2 ] Buscar pelo título\n";
        cout << "[ 3 ] Buscar pelo autor\n";
        cout << "[ 4 ] Mostrar todos os livros";
        cout << "--- Para sair, digite 0";
        cout << endl;

        cin >> opcaoMenu;
        cin.ignore();

        switch (opcaoMenu) {
            case 1: {
            int idLivro;
            string nomeLivro, autorLivro;
            cout << "ID Livro: ";
            cin >> idLivro;
            cin.ignore();
            cout << "Titulo: ";
            getline(cin, nomeLivro);
            cout << "Autor: ";
            getline(cin, autorLivro);

            Livro livro(idLivro, nomeLivro, autorLivro);
            bib.adicionarLivro(livro);
            break;
            }

            case 2: {
            string tituloLivro;
            cout << "Titulo do livro: ";
            getline(cin, tituloLivro);
            bib.buscarPeloTitulo(tituloLivro);
            break;
            }

            case 3: {
            string autorLivro;
            cout << "Autor do livro: ";
            getline(cin, autorLivro);
            bib.buscarPeloAutor(autorLivro);
            break;
            }

            case 4: {
            bib.mostrarTodosOsLivros();
            break;
            }

            case 0: {
                cout << "Sistema encerrado.\n";
                break;
            }
            
            default:
            cout << "Opção inválida.\n";
        }
    }
}