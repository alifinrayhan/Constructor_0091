#include <iostream>
#include <string>
using namespace std;

class Buku
{
    string judul;
public:
    Buku setJudul(string judul)
    {
        this->judul = judul;
        return *this;
    }
    string getJudul()
    {
        return this->judul;
    }    

} bukunya;