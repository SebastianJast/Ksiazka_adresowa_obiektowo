#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    void usunWybranaLinieWPliku(int numerUsuwanejLinii);

    Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata);
    void wyswietlDaneAdresata(Adresat adresat);
    int zwrocNumerLiniiSzukanegoAdresata(int idUsuwanegoAdresata);
    int podajIdWybranegoAdresata();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat, int idEdytowanegoAdresata);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, string nazwaPlikuTymczasowego ,int idZalogowanegoUzytkownika) : plikZAdresatami(nazwaPlikuZAdresatami, nazwaPlikuTymczasowego), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
         adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);
    int znajdzOstatnieIdAdresata();
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();

};

#endif
