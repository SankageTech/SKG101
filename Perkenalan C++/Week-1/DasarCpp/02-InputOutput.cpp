#include<iostream>
using namespace std;
int main(){
  char nama[20];//deklarasi variabel nma
  int umur; //deklarasi variabel umur
  cout<<"Masukan nama: "; //Output string
  cin.getline(nama,20);   //mengambil input dalam satu line break
  cout<<"Berapa umurmu?: "; 
  cin>>umur; //mengambil imput
  cout<<"Namamu adalah "<<nama<<"Dan umurmu adalah "<<umur; //output
  }
