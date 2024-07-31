#include <iostream>

using namespace std;

int cetakdata (int Cetak){
    string nama, jurusan;
    int tinggibadan, nisn;


    cout << "masukan nama : \n"; cin >> nama;
    cout << "masukan nisn siswa : \n"; cin >> nisn ;
    cout << "masukan Nama jurusan anda sekarang : \n"; cin >> jurusan;
    cout << "masukkan tinggi badan anda : \n"; cin >> tinggibadan;
    cout << "///////////////////////////////////////////  \n";
    cout << "data diri telah dibuat \n";
    cout << "nama anda : " << nama << endl;
    cout << "nisn siswa : " << nisn << endl;
    cout << "jurusan yg dipilih : " << jurusan << endl;
    cout << "tinggi badan : " << tinggibadan << endl;



    
}

int main() {
    char cetak;
    int nama;
    cout << "ingin membuat data diri ? (y/n) \n";
    cin >> cetak;
    if (cetak == 'y')
    {
        cout << cetakdata(nama) << endl;
        
    } else if (cetak == 'n')
    {
        cout << "program selesai \n";
    } else{
        cout << "maksud ? \n";
    }
    
    
}