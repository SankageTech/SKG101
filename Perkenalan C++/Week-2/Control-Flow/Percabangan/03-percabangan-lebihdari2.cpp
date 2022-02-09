#include <iostream>
using namespace std;
int main(){
    int nilai;
    char passingGrade[3] {'A','B','C'};
    char passingGradeSiswa;
    cout<<"Program passing grade"<<endl;
    cout<<"Masukan nilai: ";
    cin>>nilai;
    if(nilai<70){
        passingGradeSiswa=passingGrade[2];
        cout<<"Nilai kamu: "<<nilai<<"\nPassing grade:" <<passingGradeSiswa<<endl;
    }
    else if(nilai>=70&&nilai<=85){
        passingGradeSiswa=passingGrade[1];
        cout<<"Nilai kamu: "<<nilai<<"\nPassing grade: "<<passingGradeSiswa<<endl;
    }
    else{
        passingGradeSiswa=passingGrade[0];
        cout<<"Nilai kamu: "<<nilai<<"\nPassing grade: "<<passingGradeSiswa<<endl;
    }
}
