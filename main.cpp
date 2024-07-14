#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;


int main()
{
    int idZalogowanegoUzytkownika = 0;
    int idOstatniegoAdresata = 0;
    char wybor;

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt", "Adresaci_tymczasowo");

   while (true)
    {
        if (idZalogowanegoUzytkownika == 0)
        {
            wybor = MetodyPomocnicze::wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        } else{
            idOstatniegoAdresata = ksiazkaAdresowa.znajdzOstatnieIdAdresata();
            wybor = MetodyPomocnicze::wybierzOpcjeZMenuUzytkownika();
            switch (wybor)
            {
            case '1':
                idOstatniegoAdresata = ksiazkaAdresowa.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
                break;
            case '2':

                break;
            case '3':

                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                idZalogowanegoUzytkownika = 0;
                break;
            }
        }
}
return 0;
}
