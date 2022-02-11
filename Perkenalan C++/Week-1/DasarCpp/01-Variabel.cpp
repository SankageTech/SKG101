#include<iostream>
using namespace std;
int main(){
  cout<<"Variabel"<<endl;
  //ini deklarasi variabel secara explicit
  int a=12;
  float b=12.5;
  char Z='Z';
  string Nama="Udin";
  bool is_subscribe=false;
  //ini deklarasi variabel secara implicit
  cout<<"Masukan nama: ";
  cin>>nama; //nama akan diganti oleh inputan
  cout<<"Umurmu: ";
  cin>>a;
  //variabel juga bisa di deklarasi seperti ini
  int z(12);
  int Haji{12};
}