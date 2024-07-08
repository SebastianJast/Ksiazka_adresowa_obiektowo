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
    uzytkownikMenedzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    int idZalogowanegoUzytkownika = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}
