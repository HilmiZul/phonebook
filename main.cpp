#include <iostream>
#include <string>
using namespace std;

const int maks=7;
int main(){
  int n,i;
  string nama[10], telepon[10], cari,
  nama_ketemu, telepon_ketemu;
  bool ketemu = false;

  cout<<"Berapa banyak kontak yang di input: ";
  cin>>n;

  // validasi input banyak kontak
  if(n > maks){
    cout<<"Maksimal harus input 7 kontak."<<endl;
    return main();
  } else if(n < 1){
    cout<<"Minimal input 1 kontak."<<endl;
    return main();
  }

  for(i=0; i<n; i++){
    cin>>nama[i]>>telepon[i];
  }

  cout<<"Cari kontak berdasarkan nama: ";
  cin>>cari;

  for(i=0; i<n; i++){
    if(nama[i] == cari){
      ketemu = true;
      nama_ketemu = nama[i];
      telepon_ketemu = telepon[i];
      break;
    }
  }

  if(ketemu){
    cout<<"Kontak ketemu!"<<endl;
    cout<<"Nama: "<<nama_ketemu<<endl;
    cout<<"Telepon: "<<telepon_ketemu<<endl;
  } else {
    cout<<"Kontak tidak ditemukan! :("<<endl;
  }
  return 0;
}
