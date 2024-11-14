#include <iostream>
#include <math.h>

using namespace std;

void menu();
void skaiciavimas();

int shop;
int obuolys, apelsinas, bananas, kriause, kiwi;
double obuolys_kaina = 0.10, apelsinas_kaina = 0.13, bananas_kaina = 0.60, kriause_kaina = 0.40, kiwi_kaina = 0.12;
int obuolys_kiekis = 134, apelsinas_kiekis = 126, bananas_kiekis = 118, kriause_kiekis = 113, kiwi_kiekis = 110;
int obuolys_suma, apelsinas_suma, bananas_suma, kriause_suma, kiwi_suma;
int kiekis;

int main(){

    menu();
    skaiciavimas();
    return 0;

}

void menu() {
    cout << "Vaisiu paisirinkimas:" << endl;

    cout << "1.Obuolys" << endl;
    cout << "2.Apelsinas" << endl;
    cout << "3.Bananas" << endl;
    cout << "4.Kriause" << endl;
    cout << "5.Kiwi" << endl;


    cout << "Pasirinkite vaisiu: ";
    cin >> shop;


    switch (shop) {
    case 1:
        cout << "Obuolys\nkaina: 0.10$ kiekis: 134" << endl;
        break;
    case 2:
        cout << "Apelsinas\nkaina: 0.13$ kiekis: 126" << endl;
        break;
    case 3:
        cout << "Bananas\nkaina: 0.60$ kiekis: 118" << endl;
        break;
    case 4:
        cout << "Kriause\nkaina: 0.40$ kiekis: 113" << endl;
        break;
    case 5:
        cout << "Kiwi\nkaina: 0.12$ kiekis: 110" << endl;
        break;
    }

}

void skaiciavimas() {

    cout << "Iveskite kieki: ";
    cin >> kiekis;

    switch (shop) {
    case 1:
        obuolys_suma = obuolys_kaina * kiekis;
        cout << "Suma: $" << obuolys_suma << endl;
        break;
    case 2:
        apelsinas_suma = apelsinas_kaina * kiekis;
        cout << "Suma: $" << apelsinas_suma << endl;
        break;
    case 3:
        bananas_suma = bananas_kaina * kiekis;
        cout << "Suma: $" << bananas_suma << endl;
        break;
    case 4:
        kriause_suma = kriause_kaina * kiekis;
        cout << "Suma: $" << kriause_suma << endl;
        break;
    case 5:
        kiwi_suma = kiwi_kaina * kiekis;
        cout << "Suma: $" << kiwi_suma << endl;
        break;
    }
   
}