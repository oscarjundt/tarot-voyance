#include <iostream>
#include <random>
#include <ctime>


using namespace std;

void ini(int* xx1){
    srand(time(nullptr));
    for(int i=0;i<22;i++){
        int vr2 = rand() % 22;
        xx1[i]=vr2;
    }
}


void affichage(string* x, int* xx, int x2){
    cout << "donner 3 chiffre entre 0 et 22" << endl;
    for(int i2=1;i2<4;i2++){
        cout << "chiffre " << i2 << " : ";
        cin >> x2;
        cout << x[xx[x2]] << endl;
    }
}

int main(){
    string hello[22]{"I. Le Bateleur","II. La Papesse","III. L’Impératrice","IIII. L’Empereur","V. Le Pape","VI. L’Amoureux","VII. Le Chariot","VIII. La Justice","VIIII. L’Hermite","X. La Roue de Fortune","XI. La Force","XII. Le Pendu","XIII. L’Arcane sans nom","XIIII. Tempérance","XV. Le Diable","XVI. La Maison Dieu","XVII. L’Étoile","XVIII. La Lune","XVIIII. Le Soleil","XX. Le Jugement","XXI. Le Monde","Le Mat"};
    int hello2[22];
    int nb;
    ini(hello2);
    affichage(hello,hello2,nb);
}