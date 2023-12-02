#include <iostream>
#include <vector>
using namespace std;

int main() {
    int linhas, colunas,linhas1,colunas1;
    bool condicao=false;
    do{
        cout << "Escolha o numero de linhas da primeira matriz: ";
        cin >> linhas;
        cout << "Escolha o numero de colunas da primeira matriz: ";
        cin >> colunas;
        cout << "Escolha o numero de linhas da segunda matriz: ";
        cin >> linhas1;
        cout << "Escolha o numero de colunas da segunda matriz: ";
        cin >> colunas1;
        if(colunas==linhas1){
            condicao=true;
        }
        else{
            cout << endl;
            cout << "CONDICAO PARA MULTIPLICACAO NAO EXISTENTE!" << endl;
            cout << endl;
        }
    }while(!(condicao));
    int m1[linhas][colunas],m2[linhas1][colunas1],m3[linhas][colunas1];
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
    for(int i=0;i<linhas;++i){
        for(int j=0;j<colunas1;++j){
            m3[i][j]=0;
        }
    }
    system("cls");
    for(int i=0;i<linhas;++i){
        for(int j=0;j<colunas1;++j){
            for(int k=0;k<linhas1;++k){
                m3[i][j]+=m1[i][k]* m2[k][j];
            }
        }
    }
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
    cout << "MATRIZ RESULTANTE" << endl;
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas1;j++){
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }

}