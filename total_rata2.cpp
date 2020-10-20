#include <iostream>
using namespace std;

int main(){
  float angka1, angka2 , angka3, total, rata2;

  cout << "========== Mencari nilai total dan rata-rata by Alvin ==========\n\n";

  cout << "masukan nilai pertama: ", cin >> angka1;
  cout << "masukan nilai kedua: ", cin >> angka2;
  cout << "masukan nilai ketiga: ", cin >> angka3;

  total = angka1 + angka2 + angka3;
  rata2 = total / 3;

  cout << "total nilai di atas adalah: " << total << endl;
  cout << "rata-rata dari nilai diatas adalah: " << rata2 << endl;

  return 0;
}
