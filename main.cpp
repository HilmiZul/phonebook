#include <iostream>
#include <string>
using namespace std;

int main(){
  int n,i;
  string nama[10], telepon[10], cari;
  bool ketemu = false;

  cout<<"Berapa banyak kontak yang di input: ";
  cin>>n;

  for(i=0; i<n; i++){
    cin>>nama[i]>>telepon[i];
  }

  cout<<"Cari kontak berdasarkan nama: ";
  cin>>cari;

  for(i=0; i<n; i++){
    if(nama[i] == cari){
      ketemu = true;
      break;
    }
  }

  if(ketemu){
    cout<<"Kontak ketemu!"<<endl;
  } else {
    cout<<"Kontak tidak ditemukan! :("<<endl;
  }
  return 0;
}
