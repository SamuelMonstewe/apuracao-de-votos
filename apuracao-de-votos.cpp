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
    int TotalDeVotos[6];
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

            if(true)
            {
                cout << "Candidato selecionado: " << Candidatos[CodigoCandidato] << endl;
                cout << "Concluir voto? <S/N>";
                cin >> ConclusaoDeVoto;
            }
            if(ConclusaoDeVoto == 'S')
                 for(int i = 0; i < 6; i++)
                    TotalDeVotos[CodigoCandidato]++;
        
            for(int i = 0; i < 6; i++)
                 cout << "Estado atual das eleicoes: " << Candidatos[i] << " esta com " << TotalDeVotos[i] << " votos " << endl;        
        }
        

        

    }
    
}
