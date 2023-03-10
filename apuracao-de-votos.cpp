#include <iostream>
#include <cstdio>
#include <locale>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;



int main()
{
    string Candidatos[] = {"[Nulo]", "[Bolsonaro]", "[Lula]", "[Ciro]", "[Padre Kelmo]", "[Simone Tebet]", "[Pablo Marcal]"};
    string CandidatoVencedor;
    unsigned int TotalDeVotosCandidatoVencedor = 0;
    unsigned int TotalDeVotosCadaCandidato[7] = {0};
    uint16_t CodigoDeVotoDoCandidato;
    uint16_t TotalDeEleitores = 0;
    char ConclusaoDeVoto = 'N';
    char VerificacaoParaVoto = 'S';

    while (VerificacaoParaVoto == 'S')
    {    
        if(ConclusaoDeVoto == 'S')
            ConclusaoDeVoto = 'N';
        
        cout << "Candidatos disponiveis para voto com seus respectivos codigos: " << endl;

        printf("----------------------------------------------------------------------------------------------------------------------------------\n|");
        for(int i = 0; i < 7; i++)
           cout <<  i << " - " << Candidatos[i] << setw(5);
        printf("\n----------------------------------------------------------------------------------------------------------------------------------\n");
        
        while(ConclusaoDeVoto == 'N')
        {
            cout << "Codigo de candidato para o voto: " << endl;
            cin  >> CodigoDeVotoDoCandidato;
            if(CodigoDeVotoDoCandidato == 0)
            {
                cout << "VOCE TEM CERTEZA? <S/N>";
                cin >> ConclusaoDeVoto;
                ConclusaoDeVoto = toupper(ConclusaoDeVoto);
                if(ConclusaoDeVoto == 'S')
                    TotalDeVotosCadaCandidato[CodigoDeVotoDoCandidato]++;
            }
            else
            {
                cout << "Candidato selecionado: " << Candidatos[CodigoDeVotoDoCandidato] << endl;
                cout << "Concluir voto? <S/N>";
                cin >> ConclusaoDeVoto;
                ConclusaoDeVoto = toupper(ConclusaoDeVoto);
               if(ConclusaoDeVoto == 'S') 
                TotalDeVotosCadaCandidato[CodigoDeVotoDoCandidato]++;
            }
            
        }

        cout << "Estado atual das eleicoes: ";

        for(int i = 0; i < 7; i++)
             cout << Candidatos[i] << " esta com " << TotalDeVotosCadaCandidato[i] << " votos " << endl;      
              
        cout << "Obrigado por votar!" << endl << "--------------------" << endl;
        cout << "Comecar a votar? <S/N>";
        cin >> VerificacaoParaVoto;
        VerificacaoParaVoto = toupper(VerificacaoParaVoto);
        TotalDeEleitores++;
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
   
    if(CandidatoVencedor == "[Nulo]")
        cout << "ELEICOES CANCELADAS!" << endl;
    else
        cout << "O candidato vencedor foi: " << CandidatoVencedor << " com " << TotalDeVotosCandidatoVencedor << " votos " << endl;
    
    cout << "O total de eleitores participantes foi de: " << TotalDeEleitores << endl;

      system("pause");
}




