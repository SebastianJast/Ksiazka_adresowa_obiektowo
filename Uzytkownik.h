#include <iostream>
#include <vector>

using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    void usatwId(int noweId);
    void usatwLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};
