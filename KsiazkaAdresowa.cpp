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
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
  {
      adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, NAZWA_PLIKU_TYMCZASOWEGO, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
  }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::dodajAdresata(int idOstatniegoAdresata)
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
        {
            adresatMenedzer -> dodajAdresata(idOstatniegoAdresata);
        }
        else {
            cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
            system("pause");
        }
}

int KsiazkaAdresowa::znajdzOstatnieIdAdresata()
{
    return adresatMenedzer->znajdzOstatnieIdAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

int KsiazkaAdresowa::usunAdresata()
{
    return adresatMenedzer-> usunAdresata();
}

void KsiazkaAdresowa::edytujAdresata()
{
    adresatMenedzer->edytujAdresata();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatMenedzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatMenedzer->wyszukajAdresatowPoNazwisku();
}
