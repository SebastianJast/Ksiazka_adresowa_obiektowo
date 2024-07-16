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


    Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata);
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, string nazwaPlikuTymczasowego ,int idZalogowanegoUzytkownika) : plikZAdresatami(nazwaPlikuZAdresatami, nazwaPlikuTymczasowego), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
         adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    int dodajAdresata(int idOstatniegoAdresata);
    void wczytajAdresatowZPliku();
    int znajdzOstatnieIdAdresata();
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
    void edytujAdresata();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    int usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
};

#endif
