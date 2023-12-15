#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  long angka;
  string instr,name;
  bool is_tua;

  cout << "masukan nomor (angka): ";
  getline(cin,instr);
  stringstream(instr) >> angka;
  cout << "masukan nama anda: ";
  getline(cin,instr);
  stringstream(instr) >> name;
  cout << "apakah anda sudah tua? ";
  getline(cin,instr);
  stringstream(instr) >> is_tua;


  cout << "informasi anda: " << angka << " " << name << " " << (is_tua == 1 ? "usia lanjut" : "usia muda");
}
