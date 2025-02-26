#include <iostream>
#include <string.h>

using namespace std;

int main(){
    inicio:

    bool venceu=false;
    char escolha;
    char palavra[50], erros[26]="                         ";
    char letra;
    int tentativas=5, i, countLetras=0, count=0, countUsadas=0, countAcertos=0;

    cout << "JOGO DA FORCA\n\n";
    cout << "Quer jogar? Digite 's' para sim ou 'n' caso contrario: ";
    cin >> escolha;
    cout << endl;
    if(escolha=='n' || escolha=='N'){
        return 0;
    }
    else if(escolha=='s' || escolha=='S'){
        cout << "Digite a palavra: ";
        cin >> palavra;
        cout << "\n";

        for(i=0;palavra[i]!='\0';i++){
            countLetras++;
        }

        system("cls");

        char str[countLetras];

        for(i=0;i<countLetras;i++){
            str[i]='_';
        }

        cout << str << "\n\n";

        while(venceu==false){
            cout << "Voce tem " << tentativas << " tentativas. Letra erradas: " << erros << "\n\n";
            cout << "Digite uma letra: ";
            cin >> letra;
            cout << endl;

            for(i=0;palavra[i]!='\0';i++){
                if(palavra[i]==letra){
                    str[i]=letra;
                    count++;
                    countAcertos++;
                }
                else if(count==0 && i==countLetras-1){
                    tentativas--;
                }
            }

            if(count==0){
                erros[countUsadas]=letra;
                countUsadas++;
            }
            count=0;
            system("cls");
            cout << str << "\n\n";
            //cout << "countAcertos: " << countAcertos << " | countLetras: " << countLetras << "\n\n";

            if(countAcertos==countLetras){
                cout << "VOCE VENCEU\n\n";
                system("pause");
                venceu=true;
            }

            switch(tentativas){
            case 4:
                cout << "CABECA\n\n";
                break;
            case 3:
                cout << "CABECA E TRONCO\n\n";
                break;
            case 2:
                cout << "CABECA, TRONCO E BRACOS\n\n";
                break;
            case 1:
                cout << "CABECA, TRONCO, BRACOS E PERNAS\n\n";
                break;
            }

            if(tentativas<=0){
                system("cls");
                cout << "A palavra era: " << palavra << "\n\n";
                cout << "VOCE PERDEU\n\n";
                system("pause");
                break;
            }
        }

        for(i=0;i<countLetras;i++){
            str[i]=' ';
        }

        system("cls");
        goto inicio;
    }
    else{
        system("cls");
        goto inicio;
    }


}
