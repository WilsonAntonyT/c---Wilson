//wilson A
#include <iostream>
#include <string>
using namespace std;

class basic{

    public:
        int j, jm;
        string namaG, namaM , b;
        float bm;

    void guruin(){
        cout<<"Masukkan NISN guru: "; cin>>j;
        cout<<"Masukkan Nama guru: ";
        cin.ignore();
        getline(cin, namaG);
        cout<<"Masukkan Mapel guru: ";
        cin.ignore();
        getline(cin, b);
    }
    void guruout(){
        cout<<"NISN: "<<j<<endl;
        cout<<"Nama: "<<namaG<<endl;
        cout<<"Mapel: "<<b<<endl;
    }
    void muridin(){
        cout<<"Masukkan NISN murid: "; cin>>jm;
        cout<<"Masukkan Nama murid: ";
        cin.ignore();
        getline(cin, namaM);
        cout<<"Masukkan Penilaian murid: "; cin>>bm;
    }
    void muridout(){
        cout<<"NISN: "<<jm<<endl;
        cout<<"Nama: "<<namaM<<endl;
        cout<<"penilaian: "<<bm<<endl;
    }   
};

int main(){
    int angka;
    cout<<"Masukkan angka [1] untuk guru atau [2] untuk siswa: "<<endl; cin>>angka;
    if(angka == 1){
        basic paktian;
        paktian.guruin();
        paktian.guruout();
    }
    else if(angka == 2){
        basic paktian;
        paktian.muridin();
        paktian.muridout();
    }
    else{
        cout<<"[1] or [2] only"<<endl;
        exit;
    }
}