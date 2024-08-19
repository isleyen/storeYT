#pragma once
#include <iostream>

using namespace std;

class store {
private:
	string urunAdi;
	int fiyat;
	int stokMiktari;
	int barkodNumarasi;
public:
	store(string _urunAdi, int _fiyat, int _stokMiktari, int _barkodNumarasi);
	void setUrunAdi(string _urunAdi);
	void setFiyat(int _fiyat);
	void setStokMiktari(int _stokMiktari);
	void setBarkodNumarasi(int _barkodNumarasi);
	string getUrunAdi();
	int getFiyat();
	int getStokMiktari();
	int getBarkodNumarasi();
	void stokBilgileriniYazdir();
};