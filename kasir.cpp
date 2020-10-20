#include <iostream>
using namespace std;

int main(){
  int jumlah;
  char menu, lagi;
  float total;

  cout << "====================================================\n";
  cout << "||              PROGRAM KASIR BY ALVIN            ||\n";
  cout << "====================================================\n";
  cout << "Kode | Nama Menu                        | Price     \n";
  cout << "A    | Ayam bakar + Nasi + Es Teh Manis | Rp. 15.000\n";
  cout << "B    | Ayam geprek + Nasi + Air Putih   | Rp. 12.000\n";
  cout << "C    | Rendang + Nasi + Varian Jus      | Rp. 17.000\n";
  cout << "----------------------------------------------------\n";
  cout << "Masukan kode menu yang kamu mau? ", cin >> menu; cout << endl;

//  if(menu == "P1"){
//    cout << "Paket1 (Ayam bakar + Nasi + Es Teh Manis) : " << menu << endl;
//    cout << "Harga satu paket                          : Rp. 15000" << endl;
//    cout << "Jumlah yang ingin anda pesan              : ", cin >> jumlah, cout << endl;total = 15000 * jumlah;
//    cout << "ini total yang harus anda bayar           : Rp. " << total << endl;
//  } else if(menu == "P2"){
//    cout << "Paket1 (Ayam geprek + Nasi + Air Putih)   : " << menu << endl;
//    cout << "Harga satu paket                          : Rp. 12000" << endl;
//    cout << "Jumlah yang ingin anda pesan              : ", cin >> jumlah, cout << endl;total = 12000 * jumlah;
//    cout << "ini total yang harus anda bayar           : Rp. " << total << endl;
//  } else {
//    cout << "Paket1 (Rendang + Nasi + Varian Jus)      : " << menu << endl;
//    cout << "Harga satu paket                          : Rp. 17000" << endl;
//    cout << "Jumlah yang ingin anda pesan              : ", cin >> jumlah, cout << endl;total = 17000 * jumlah;
//    cout << "ini total yang harus anda bayar           : Rp. " << total << endl;
//  }

 switch(menu){
    case 'A' :{
    cout << "Paket A (Ayam bakar + Nasi + Es Teh Manis) : " << menu << endl;
    cout << "Harga satu paket                           : Rp. 15000" << endl;
    cout << "Jumlah yang ingin anda pesan               : ", cin >> jumlah;
    total = 15000 * jumlah;
    cout << "ini total yang harus anda bayar            : Rp. " << total << endl;
    break;
    }
    case 'B' :{
    cout << "Paket B (Ayam geprek + Nasi + Air Putih)   : " << menu << endl;
    cout << "Harga satu paket                           : Rp. 12000" << endl;
    cout << "Jumlah yang ingin anda pesan               : ", cin >> jumlah;
    total = 12000 * jumlah;
    cout << "ini total yang harus anda bayar            : Rp. " << total << endl;
    break;
    }
    case 'C' :{
    cout << "Paket C (Rendang + Nasi + Varian Jus)      : " << menu << endl;
    cout << "Harga satu paket                           : Rp. 17000" << endl;
    cout << "Jumlah yang ingin anda pesan               : ", cin >> jumlah;
    total = 17000 * jumlah;
    cout << "ini total yang harus anda bayar            : Rp. " << total << endl;
    break;
    }
    default : cout << "Maaf kode yang anda masukan salah" << endl << endl;
    return main();
 }

 cout << endl;
 cout << "Apakah ingin memesan lagi? (y/n) : ", cin >> lagi;
 cout << endl;
 switch(lagi){
   case 'y':{
     return main();
     break;
   }
   default: cout << "Terima kasih sudah menggunakan program ini :)" << endl;
 }

  return 0;
}
