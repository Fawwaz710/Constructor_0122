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

int main (){
    barang brg1("kunci", 20000);   //nama barang dan kode barang
    barang brg2("pintu", 500000);  //nama barang dan kode barang
    barang brg3("stiker", 120000); //nama barang dan kode barang

    cout << "Barang 1: " ; brg1.cetak();
    cout << "Barang 2: " ; brg2.cetak();
    cout << "Barang 3: " ; brg3.cetak();

    return 0;
}

};