#include <iostream>
using namespace std;

class Barang{
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

int main (){
    Barang Elektronik;
    Elektronik.namaBarang = "Kulkas";
    Elektronik.jumlah = 10;
    Elektronik.kategori = "Elektronik";
    Elektronik.tanggalProduksi = "20-25-2025";

    Barang NonElektronik;
    NonElektronik.namaBarang = "Meja";
    NonElektronik.jumlah = 50;
    NonElektronik.kategori = "Non Elektronik";
    NonElektronik.tanggalProduksi = "11-12-2025";

    Elektronik.printData();
    NonElektronik.printData();
}
