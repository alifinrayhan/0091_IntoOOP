#include <iostream>
using namespace std;

class Mahasiswa{
    public: //akses modifier
        string nama;
        int umur;
        string jurusan;

        void ouput(){
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

