#include <iostream>
#include <list>
#include <string>
#include "store.h"

using namespace std;

void menuyuGoster() {
	cout << "* * * * * * * * * *" << endl;
	cout << "*                 *" << endl;
	cout << "*       MENU      *" << endl;
	cout << "*                 *" << endl;
	cout << "* * * * * * * * * *" << endl;
	cout << "1.Urun Ekle" << endl;
	cout << "2.Urun Sil" << endl;
	cout << "3.Stok Miktarini Guncelle" << endl;
	cout << "4.Urun Arama " << endl;
	cout << "5.Tum Urunleri Listeleme" << endl;
	cout << "6.Cikis" << endl;

}

void urunEkle(list <store>* lst) {
	string urunAdi;
	int fiyat, barkodNumarasi, stokMiktari;

	cout << "Eklemek istediginiz urunun adini giriniz: ";
	
	cin.ignore();
	getline(cin, urunAdi);

	cout << "Eklemek istediginiz urunun fiyatini giriniz: "; cin >> fiyat;
	cout << "Eklemek istediginiz urunun barkod numarasini giriniz: "; cin >> barkodNumarasi;
	cout << "Eklemek istediginiz urunun stok miktarini giriniz: "; cin >> stokMiktari;

	store yeniUrun(urunAdi, fiyat, barkodNumarasi, stokMiktari);


	lst->push_back(yeniUrun);

	cout << "Yeni urununuz basariyla eklenmiþtir!" << endl;


}

int main() {
	list <store>* storelist = new list <store>(); // liste oluþturuldu
	return 0;
}