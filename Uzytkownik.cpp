#include "Uzytkownik.h"

void Uzytkownik:: usatwId(int noweId)
{
    if (noweId >= 0)
    id = noweId;
}
void Uzytkownik::usatwLogin(string nowyLogin)
{
    login = nowyLogin;
}
void Uzytkownik::ustawHaslo(string noweHaslo)
{
    haslo = noweHaslo;
}
int Uzytkownik::pobierzId()
{
    return id;
}
string Uzytkownik::pobierzLogin()
{
    return login;
}
string Uzytkownik::pobierzHaslo()
{
    return haslo;
}
