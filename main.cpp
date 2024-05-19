#include <iostream>

using namespace std;

// Dichiarazione costanti
# define e 6

// Colori
#define GREEN    "\033[32m"
#define RED      "\033[31m"
#define BLUE     "\033[34m"
#define RESET    "\033[0m"

// Prototipi
int menu();
void matrix(int m[e][e]);
void stampa(int m[e][e]);
void next();
void uno(int m[e][e]);
void due(int m[e][e]);
void tre(int m[e][e]);
void quattro(int m[e][e]);
void cinque(int m[e][e]);


int main(){

    // Dichiarazione variabili
    int m[e][e];
    int s;

    do{
        system("cls");
        matrix(m);
        s=menu();

        cout<<"\n";
        
        switch(s){

            case 1:{
                uno(m);
                stampa(m);
                next();
                break;
            }

            case 2:{
                due(m);
                stampa(m);
                next();
                break;
            }

            case 3:{
                tre(m);
                stampa(m);
                next();
                break;
            }

            case 4:{
                quattro(m);
                stampa(m);
                next();
                break;
            }

            case 5:{
                cinque(m);
                stampa(m);
                next();
                break;
            }

            case 0:{
                cout<<GREEN<<"Arrivederci..."<<RESET<<endl;
                break;
            }

            default:{
                cout<<RED<<"Scelta non valida"<<RESET<<endl;
                next();
                break;
            }
        }
    }while(s!=0);
    

    return 0;
}

int menu(){

    int scelta;

    cout<<BLUE<<"\t----- MENU -----\n"<<RESET<<endl;
    cout<<BLUE<<"1. "<<RESET<<"Prima riga e ultima riga\n";
    cout<<BLUE<<"2. "<<RESET<<"Prima colonna e ultima colonna\n";
    cout<<BLUE<<"3. "<<RESET<<"Diagonale principale\n";
    cout<<BLUE<<"4. "<<RESET<<"Colonne pari \n";
    cout<<BLUE<<"5. "<<RESET<<"Righe dispari\n";
    cout<<BLUE<<"0. "<<RESET<<"Esci\n";

    cout<<GREEN<<"\nFai una scelta: "<<RESET;
    cin>>scelta;

    return scelta;
}

void matrix(int m[e][e]){
    for(int i=0;i<e;i++){
        for(int j=0;j<e;j++){
            m[i][j]=0;
        }
    }
}

void stampa(int m[e][e]){
    for(int i=0;i<e;i++){
        for(int j=0;j<e;j++){
            if(m[i][j]==1){
                cout<<GREEN<<m[i][j]<<RESET<<"\t";
            }
            else{
                cout<<m[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
}

void next(){
    cout<<GREEN<<"\nPremi un tasto..."<<RESET;
    cin.ignore();
    cin.get();
}

void uno(int m[e][e]){
    for(int i=0;i<e;i++){
        for(int j=0;j<e;j++){
            if(i==0 || i==e-1){
                m[i][j]=1;
            }
        }
    }
}

void due(int m[e][e]){
    for(int i=0;i<e;i++){
        for(int j=0;j<e;j++){
            if(j==0 || j==e-1){
                m[i][j]=1;
            }
        }
    }
}

void tre(int m[e][e]){
    for(int i=0;i<e;i++){
        m[i][i]=1;
    }
}

void quattro(int m[e][e]){
    for(int i=0;i<e;i++){
        for(int j=0;j<e;j++){
            if(i%2!=0){
                m[j][i]=1;
            }
        }
    }
}


void cinque(int m[e][e]){
    for(int i=0;i<e;i++){
        for(int j=0;j<e;j++){
            if(j%2==0){
                m[j][i]=1;
            }
        }
    }
}