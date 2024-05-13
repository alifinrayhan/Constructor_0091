#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
    static int nim;
    int Id;
    string nama;

    void setId();

    void printAll();
    Mahasiswa(string pNama) : nama(pNama)
    {
        setId();
    }
    

    
      
};

int Mahasiswa::nim = 20;
void Mahasiswa::setId()
{
    Id = nim++;
}

void Mahasiswa::printAll()
{
    cout << " ID = " << Id << endl;
    cout << " Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniwan");
    Mahasiswa mhs4("Joko Purbo");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}