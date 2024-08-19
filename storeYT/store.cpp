#include "store.h"

store::store(string _urunAdi, int _fiyat, int _stokMiktari, int _barkodNumarasi) {
	urunAdi = _urunAdi;
	fiyat = _fiyat;
	stokMiktari = _stokMiktari;
	barkodNumarasi = _barkodNumarasi;
}
void store::setUrunAdi(string _urunAdi) {
	urunAdi = _urunAdi;
}
void store::setFiyat(int _fiyat) {
	fiyat = _fiyat;
}
void store::setStokMiktari(int _stokMiktari) {
	stokMiktari = _stokMiktari;
}
void store::setBarkodNumarasi(int _barkodNumarasi) {
	barkodNumarasi = _barkodNumarasi;
}
string store::getUrunAdi() {
	return urunAdi;
}
int store::getFiyat() {
	return fiyat;
}
int store::getStokMiktari() {
	return stokMiktari;
}
int store::getBarkodNumarasi() {
	return barkodNumarasi;
}
void store::stokBilgileriniYazdir() {
	cout << "Urun Adi: " << urunAdi << " Fiyati: " << fiyat << " Stok Miktari: " << stokMiktari << " BarkodNumarasi: " << barkodNumarasi << endl;
}