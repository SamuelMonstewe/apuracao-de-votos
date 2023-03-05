#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <windows.h>
#include <locale>
#include <string>
using namespace std;

int main()
{  
    string Candidatos[] = {"Nulo", "Bolsonaro", "Lula", "Ciro", "Padre Kelmo", "Simone Tebet", "Pablo Marcal"};
    int TotalDeVotosCadaCandidato[7] = {0};
    int CodigoCandidato;
    char ConclusaoDeVoto = 'N';
    int flag = 1;

    while (flag == 1)
    {
        cout << "Candidatos disponiveis para voto com seus respectivos codigos: " << endl;

        for(int i = 0; i < 7; i++)
        {
           cout <<  i << " - " << Candidatos[i] << endl;
        }
        
        while(ConclusaoDeVoto == 'N')
        {
            cout << "Codigo de candidato para o voto: " << endl;
            cin  >> CodigoCandidato;
            cout << "Candidato selecionado: " << Candidatos[CodigoCandidato] << endl;
            cout << "Concluir voto? <S/N>";
            cin >> ConclusaoDeVoto;
            TotalDeVotosCadaCandidato[CodigoCandidato]++;
        }
        
        cout << "Estado atual das eleicoes: ";

        for(int i = 0; i < 7; i++)
             cout << Candidatos[i] << " esta com " << TotalDeVotosCadaCandidato[i] << " votos " << endl;      
              
        flag = 2;

        

    }
    
}
