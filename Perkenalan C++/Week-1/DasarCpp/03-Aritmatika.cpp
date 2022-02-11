#include<iostream>
using namespace std;
int main(){
  int a,b;
  a=15; //inisialisasi value variabel
  b=a;
  cout<<"Operasi Aritmatika\n"; //\n merupakan escape character untuk membuat garis baru
  cout<<"Operasi penjumlahan"<<endl; //sama seperti \n, endl juga merupakan perintah untuk membuat garis baru
  cout<<a<<"+"<<b<<"="<<a+b;//output 30
  cout<<"\nOperasi pengurangan"<<endl;
  cout<<a<<"-"<<b<<"="<<a-b<<endl; //output 0
  cout<<"Operasi perkalian"<<endl;
  cout<<a<<"x"<<b<<"="<<a*b<<endl; //output 225
  cout<<"Operasi pembagian"<<endl;
  cout<<a<<"/"<<b<<"="<<a/b<<endl; //output 1
  cout<<"Operasi modulus"<<endl;
  cout<<a<<"%"<<b<<"="<<a%b<<endl; //output 0
}
