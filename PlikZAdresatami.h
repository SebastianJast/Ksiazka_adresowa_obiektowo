#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"


using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    const string NAZWA_PLIKU_TYMCZASOWEGO;
    int idEdytowanegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void usunPlik(string nazwaPlikuZRozszerzeniem);

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami, string nazwaPlikuTymczasowego) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami), NAZWA_PLIKU_TYMCZASOWEGO(nazwaPlikuTymczasowego), PlikTekstowy(nazwaPlikuZAdresatami) {};
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int znajdzOstatnieIdAdresata();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
    void edytujWybranegoAdresataZPliku(Adresat adresat, int idEdytowanegoAdresata);
};

#endif
