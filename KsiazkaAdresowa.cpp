#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
   int idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
   return idZalogowanegoUzytkownika;
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}

int KsiazkaAdresowa::dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    return adresatMenedzer.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
}

int KsiazkaAdresowa::znajdzOstatnieIdAdresata()
{
    return adresatMenedzer.znajdzOstatnieIdAdresata();
}
