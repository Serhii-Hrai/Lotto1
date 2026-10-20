#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    const int Max = 49;
    const int Anzahl = 6;
    bool Kugel[Max];
    int Zufall = 0;

    srand(time(NULL));
    for (int Nr = 0; Nr < Max; Nr++)
        Kugel[Nr] = false;

    for (int Nr = 0; Nr < Anzahl; Nr++) {
        do {
            Zufall = rand() % Max;
        } while (Kugel[Zufall]);

        Kugel[Zufall] = true;
        cout << Nr + 1 << ". Ziehung: " << Zufall << "\n";
    }
}