#include <iostream>
using namespace std;

int main(){
  int nilai;
  string pilihan;

  cout << "+---------------------------------------------+\n";
  cout << "|        Program Cek Kelulusan By Alvin       |\n";
  cout << "+---------------------------------------------+\n";

  cout << "Selamat datang di program pengecekan kelulusan\n\n";
  cout << "Berapa nilai anda? ", cin >> nilai;

  if(nilai >= 70 && nilai < 100){
    cout << "Selamat anda lulus dengan nilai " << nilai << endl <<endl;
  } else if(nilai == 100){
    cout << "Selamat anda lulus dengan nilai sempurna\n\n";
  } else {
    cout << "Maaf anda belum lulus, karena nilai anda kurang dari 70\n\n";
  }

  cout << "Apakah ingin mengecek kembali nilai anda? (y/n): ", cin >> pilihan;
  cout << endl;
  if(pilihan == "y"){
    return main();
  } cout << "Terima kasih sudah menggunakan program ini :)\n";
  return 0;
}
