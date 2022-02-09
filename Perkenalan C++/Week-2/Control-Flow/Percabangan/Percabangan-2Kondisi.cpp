#include<iostream>
using namespace std;
int main(){
  string nama;
  int umur;
  cout<<"If statement"<<endl;
  cout<<"Masukan nama anda: ";
  getline(cin,nama);
  cout<<"Umur anda: ";
  cin>>umur;
  if(umur>=18){
    cout<<"Kamu sudah cukup umur untuk mengendari sepeda motor";
  }
  else{
    cout<<"Kamu belum cukup umur, kembali lah "<<18-umur<<" Tahun lagi";
  }
}
