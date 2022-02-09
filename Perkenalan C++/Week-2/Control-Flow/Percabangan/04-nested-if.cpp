#include <iostream>
using namespace std;
int main(){
    int nilai;
    char passingGrade[3] {'A','B','C'};
    bool is_lulus;
    char passingGradeSiswa;
    cout<<"Program passing grade"<<endl;
    cout<<"Masukan nilai: ";
    cin>>nilai;
    if(nilai<70){
        passingGradeSiswa=passingGrade[2];
        cout<<"Nilai kamu: "<<nilai<<"\nPassing grade:" <<passingGradeSiswa<<endl;
        is_lulus=false;
    }
    else if(nilai>=70&&nilai<=85){
        passingGradeSiswa=passingGrade[1];
        cout<<"Nilai kamu: "<<nilai<<"\nPassing grade: "<<passingGradeSiswa<<endl;
        is_lulus=true;
    }
    else{
        passingGradeSiswa=passingGrade[0];
        cout<<"Nilai kamu: "<<nilai<<"\nPassing grade: "<<passingGradeSiswa<<endl;
        is_lulus=true;
    }
    
    //nested if
    
    if(is_lulus==true){
        if(passingGradeSiswa==passingGrade[0]){
            cout<<"Selamat kamu lulus dengan nilai yang memuaskan";
        }
        else{
        cout<<"Selamat kamu lulus!";
        }
    }
    else{
        cout<<"Maaf anda belum lulus, ulangi tahun depan";
    }
}
