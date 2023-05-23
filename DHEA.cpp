/*NAMA : DHEA TANIA SALSABILA
KELAS : LAB 6 ADP
NIM : 221401092 */
#include<iostream>
using namespace std;
int main(){
    int nilai[3], *petunjuk;
    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;
    petunjuk = &nilai[0];
    
    cout<<"Nilai "<<*petunjuk<<" ada alamat "<<petunjuk<<endl;
    cout<<"Nilai "<<*(petunjuk+1)<<" ada alamat "<<petunjuk+1<<endl;
    cout<<"Nilai "<<*(petunjuk+2)<<" ada alamat "<<petunjuk+2<<endl;
}