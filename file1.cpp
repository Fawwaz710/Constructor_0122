//buatlah program c++ dengan class barang yang memiliki atribut: namaBarang,
//kode barang
//program memiliki construktor berparameter untuk mengisi
//nilai namaBarang dan kodeBarang.
//serta memiliki fungsi untuk menampilkan  informasi barang 

//nama repository latihanConstruktor_0122

#include <iostream>
#include <string>
using namespace std;

class barang {
    public:
    string namaBarang;
    int kodeBarang;


barang (string nama, int kode){
namaBarang = nama ; 
kodeBarang = kode ;
}

void  barang:: cetak (){
    cout << "nama barang" << endl;
    cout << "kode barang" << endl;
}

};