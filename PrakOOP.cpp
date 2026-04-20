#include <iostream>
using namespace std;

class barang{
    public :
    string namaBarang;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData(){
        cout << "Nama Barang : " <<namaBarang << endl;
        cout << "Jumlah Barang : " << jumlah << endl;
        cout << "Kategori Barang : " << kategori << endl;
        cout << "Tanggal Produksi Barang : " << tanggalProduksi << endl;
    }
}; //batas class