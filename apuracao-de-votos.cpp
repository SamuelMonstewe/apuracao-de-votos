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
    string CandidatoVencedor;
    int TotalDeVotosCandidatoVencedor = 0;
    int TotalDeVotosCadaCandidato[7] = {0};
    uint16_t CodigoCandidato;
    char ConclusaoDeVoto = 'N';
    char VerificacaoParaVoto = 'S';

    while (VerificacaoParaVoto == 'S')
    {
        if(ConclusaoDeVoto == 'S')
            ConclusaoDeVoto = 'N';
        

        cout << "Candidatos disponiveis para voto com seus respectivos codigos: " << endl;

        for(int i = 0; i < 7; i++)
           cout <<  i << " - " << Candidatos[i] << endl;
        
        
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
              
        cout << "Obrigado por votar!" << endl << "--------------------" << endl;
        cout << "Comecar a votar? <S/N>";
        cin >> VerificacaoParaVoto;

    }

    cout << "Chegamos ao fim das eleicoes! Os resultados foram o seguinte: " << endl;

    for(int i = 0; i < 7; i++)
    {
        cout << "O candidato " << Candidatos[i] << " teve " <<  TotalDeVotosCadaCandidato[i] << " votos " << endl;
        if(TotalDeVotosCadaCandidato[i] > TotalDeVotosCandidatoVencedor)
        {
            TotalDeVotosCandidatoVencedor = TotalDeVotosCadaCandidato[i];
            CandidatoVencedor = Candidatos[i];
        }
    }

    cout << "O candidato vencedor foi: " << CandidatoVencedor << " com " << TotalDeVotosCandidatoVencedor << " votos ";

}
