#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {//struct untuk student
    string nama, jurusan, univ, alasan;
    } gwayne;

    gwayne.nama = "Kristoforus Gwayne Donovan Muliadi";
    gwayne.jurusan = "Computer Engineering";
    gwayne.univ = "Universitas Bina Nusantara";
    gwayne.alasan = "Saya ingin memperdalam ilmu dalam bidang pemrograman terutama pemrograman AI dan machine learning";

    cout <<"Nama : "<<gwayne.nama << "\n";
    cout <<"Jurusan : "<< gwayne.jurusan << "\n";
    cout <<"Universitas : "<< gwayne.univ << "\n";
    cout <<"Alasan ingin masuk GDSC : "<< gwayne.alasan << "\n";
  return(0);
}