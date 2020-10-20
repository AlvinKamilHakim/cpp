#include <iostream>
#include <string>

using namespace std;

int main(){
  int pilihan, a, b;
  float hasil;
  string operasi, pilah, y;

  cout << "pilih operator aritmatika!\n";
  cout << "1. penjumlahan\n";
  cout << "2. pengurangan\n";
  cout << "3. perkalian\n";
  cout << "4. pembagian\n";
  cout << "5. modulus\n";
  cout << endl;

  cout << "pilih program yang anda ingin jalankan: ";
  cin >> pilihan;
  cout << endl;
  if(pilihan > 5){
    cout << "maaf angka yang anda pilih tidak ada dalam list, mohon pilih ulang!" << endl;
    return main();
  }

  cout << "masukan angka pertama: ", cin >> a;
  cout << "masukan angka kedua: ", cin >> b;

  switch(pilihan){
    case 1 : hasil = a + b;
      operasi = "+";
      break;
    case 2 : hasil = a - b;
      operasi = "-";
      break;
    case 3 : hasil = a * b;
      operasi = "*";
      break;
    case 4 : hasil = a / b;
      operasi = "/";
      break;
    case 5 : hasil = a % b;
      operasi = "%";
      break;
    default:
      cout << "pilihan hanya 1 - 5!\n";
  }

  cout << "hasil dari " << a << operasi << b << "=" << hasil;
  cout << endl;
  cout << endl;

  cout << "mau lanjut? (y/n)", cin >> pilah;
  cout << endl;

  if(pilah == "y"){
    return main();
  }
  cout << "terima kasih sudah menggunakan program ini\n";

  return 0;
}
