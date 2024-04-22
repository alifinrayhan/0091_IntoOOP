#include <iostream>
using namespace std;

class Mahasiswa{
    public: //akses modifier
        string nama;
        int umur;
        string jurusan;

        void output(){
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "Jurusan: " << jurusan << endl;
        }
};



class Matakuliah{
    private:
        string kodemk;
        string namamk;
        int sks;
    public:
        void input(){
            cout << "Kode Mk: ";
            cin >> kodemk;
            cout << "Nama Mk: ";
            cin >> namamk;
            cout << "Nama Sks: ";
            cin >> sks;
        } 

        void output(){
            cout << "Kode MK: " << kodemk << endl;
            cout << "Nama MK: " << namamk << endl;
            cout << "Nama SKS: " << sks << endl;

        }   
};

int main () {
    Mahasiswa mhs;
    Matakuliah mk;

    mhs.nama = "Budi";
    mhs.umur = 20;
    mhs.jurusan = "Teknik informatika";
    mhs.output();

    mk.input();
    mk.output();

    return 0;
}

