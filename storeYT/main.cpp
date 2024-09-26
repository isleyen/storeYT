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

void urunSil(list <store>* lst) {
	list<store>::iterator itr;
	int barkodNumarasi;
	cout << "Lutfen silmek istediginiz urunun barkod numarasini giriniz: "; cin >> barkodNumarasi;
	for (itr = lst->begin(); itr != lst->end(); itr++) {
		if (itr->getBarkodNumarasi() == barkodNumarasi) {
			break;
		}
	}
	if (itr == lst->end()) {
		cout << "Lutfen gecerli bir barkod numarasi giriniz!";
		menuyuGoster();
	}
	else
		lst->erase(itr);
}

void stokGuncelle(list <store>* lst) {
	list<store>::iterator itr;
	int barkodNumarasi, secenek, miktar, yeniStok;
	cout << "Stok miktarini guncellemek istediginiz urunun barkod numarasini giriniz: "; cin >> barkodNumarasi;
	for (itr = lst->begin(); itr != lst->end(); itr++) {
		if (itr->getBarkodNumarasi() == barkodNumarasi) {
			break;
		}
	}
	if (itr == lst->end()) {
		cout << "Lutfen gecerli bir barkod numarasi giriniz!";
		menuyuGoster();
	}
	else {

		cout << "Urun eklemek istiyorsaniz 1, silmek istiyorsaniz 2 tuþuna basiniz: "; cin >> secenek;

		switch (secenek) {
		case 1:
			cout << "Eklemek istediginiz urun miktarini giriniz: "; cin >> miktar;
			yeniStok = itr->getStokMiktari() + miktar;
			itr->setStokMiktari(yeniStok);
			cout << "Guncel Stok Miktariniz: " << itr->getStokMiktari() << endl;
			break;


		case 2:
			cout << "Silmek istediginiz urun miktarini giriniz: "; cin >> miktar;
			while (miktar > itr->getStokMiktari()) {
				cout << "Lutfen gecerli bir deger giriniz: "; cin >> miktar;
			}

			yeniStok = itr->getStokMiktari() - miktar;
			itr->setStokMiktari(yeniStok);
			cout << "Guncel Stok Miktariniz: " << itr->getStokMiktari() << endl;
			break;
		}
	}
}

void urunAra(list <store>* lst) {
	list<store>::iterator itr;
	int barkodNumarasi;
	cout << "Aradiginiz urunun barkod numarasini giriniz: "; cin >> barkodNumarasi;
	for (itr = lst->begin(); itr != lst->end(); itr++) {
		if (itr->getBarkodNumarasi() == barkodNumarasi) {
			break;
		}
	}
	if (itr == lst->end()) {
		cout << "Lutfen gecerli bir barkod numarasi giriniz!";
		menuyuGoster();
	}
	else
		itr->stokBilgileriniYazdir();
}

void tumUrunleriListele(list <store>* lst) {
	list<store>::iterator itr;
	for (itr = lst->begin(); itr != lst->end(); itr++) {
		itr->stokBilgileriniYazdir();
		cout << endl;
	}
}

int main() {
	list <store>* storelist = new list <store>(); // liste oluþturuldu
	return 0;
}