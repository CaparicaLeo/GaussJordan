#include <iostream>
#include <vector>
using namespace std;
void add(int linhas, int colunas);
void sub(int linhas, int colunas);
int main() {
    int linhas, colunas,sinal;
    cout << "Escolha o numero de linhas: ";
    cin >> linhas;
    cout << "Escolha o numero de colunas: ";
    cin >> colunas;
    do{
    cout << "Deseja fazer uma adicao ou uma subtracao??" << endl
         << "1 para ADICAO (+)" << endl
         << "2 para SUBTRACAO (-)" << endl << endl
         << "Selecione aqui: ";
    cin >> sinal;
    switch(sinal){
        case 1:
            add(linhas,colunas);
            break;
        case 2: 
            sub(linhas,colunas);
            break;
        default:
            cout << endl << "INVALIDO" << endl << endl;
            break;
    }
    }while(sinal!=1 && sinal!=2);
    return 0;
}

void add(int linhas, int colunas){
    int m1[linhas][colunas],m2[linhas][colunas],m3[linhas][colunas];
    cout << "MATRIZ 1" << endl;
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << "Escolha o Elemento de linha["<<i<<"] e coluna[" << j<<"]: ";
            cin >> m1[i][j];
        }
    }
    system("cls");
    cout << "MATRIZ 2" << endl;
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << "Escolha o Elemento de linha["<<i<<"] e coluna[" << j<<"]: ";
            cin >> m2[i][j];
        }
    }
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            m3[i][j]=m1[i][j]+m2[i][j];
        } 
    }
    system("cls");
    cout << "MATRIX 1" << endl;
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "MATRIZ 2" << endl;
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "MATRIZ 3" << endl;
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
}
void sub(int linhas, int colunas){
    int m1[linhas][colunas],m2[linhas][colunas],m3[linhas][colunas];
    cout << "MATRIZ 1" << endl;
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << "Escolha o Elemento de linha["<<i<<"] e coluna[" << j<<"]: ";
            cin >> m1[i][j];
        }
    }
    system("cls");
    cout << "MATRIZ 2" << endl;
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << "Escolha o Elemento de linha["<<i<<"] e coluna[" << j<<"]: ";
            cin >> m2[i][j];
        }
    }
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            m3[i][j]=m1[i][j]-m2[i][j];
        } 
    }
    system("cls");
    cout << "MATRIX 1" << endl;
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "MATRIZ 2" << endl;
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "MATRIZ 3" << endl;
    for (int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
}