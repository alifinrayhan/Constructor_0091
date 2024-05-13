#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
    static int nim;

public:
    int id;
    string nama;


    void setId();
    void printAll();

    static void setNim( int pNim) { nim = pNim;}
    static int getNim() {return nim;}  

    Mahasiswa(string pNama) : nama(pNama)
    {
        setId();
    }      
};

int Mahasiswa::nim = 100;
void Mahasiswa::setId()
{
    id = ++nim;
}

void Mahasiswa::printAll()
{
    cout << " ID = " << id << endl;
    cout << " Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatmiko");
    Mahasiswa::setNim(9);
    Mahasiswa mhs3("Andi janu");
    Mahasiswa mhs4("Joko Wahano");

    cout << " Akses dari luara object = " << Mahasiswa::getNim() << endl;

    return 0;
}