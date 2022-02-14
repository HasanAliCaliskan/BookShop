#include "Bookshop.h"

BookShop::BookShop(string name, string yazar, string tur, string sayfa, int stok, int fiyat) {
	BookShop::setName(name);
	BookShop::setYazar( yazar);
	BookShop::setTur(tur);
	BookShop::setSayfa(sayfa);
	BookShop::setStok(stok);
	BookShop::setFiyat(fiyat);
}

// set fonksiyonlar� ile;
// Pointerlara dinamik olarak yer ay�rtt�k. 
// Girdileri, Pointerlar�n tuttu�u dinamik belle�e yerle�tirdik.
void BookShop::setName(string name) {
	BookShop::kitapAdi = new string;
	*kitapAdi = name;
}
void BookShop::setYazar(string yazar) {
	BookShop::kitapYazari = new string;
	*kitapYazari = yazar;
}
void BookShop::setTur(string tur) {
	BookShop::kitapTur = new string;
	*kitapTur = tur;
}
void BookShop::setSayfa(string sayfa) {
	BookShop::kitapSayfa = new string;
	*kitapSayfa = sayfa;
}
void BookShop::setStok(int stok) {
	BookShop::kitapStok = new int;
	if (stok >= 0) {
		*kitapStok = stok;
	}
	else {
		*kitapStok = 0;
	}
}
void BookShop::setFiyat(int fiyat) {
	BookShop::kitapFiyat = new int;
	if (fiyat >= 0) {
		*kitapFiyat = fiyat;
	}
	else {
		*kitapFiyat = 0;
	}
}
void BookShop::setAlim(int alim) {
	BookShop::kitapAlimAdedi = new int;
	*kitapAlimAdedi = alim;
}

// get fonksiyonlar� ile de�i�kenleri geri d�nd�rd�k.
string BookShop::getName() {
	return *kitapAdi;
}
string BookShop::getYazar() {
	return *kitapYazari;
}
string BookShop::getTur() {
	return *kitapTur;
}
string BookShop::getSayfa() {
	return *kitapSayfa;
}
int BookShop::getStok() {
	return *kitapStok;
}
int BookShop::getFiyat() {
	return *kitapFiyat;
}
int BookShop::getAlim() {
	return *kitapAlimAdedi;
}
int BookShop::getFatura() {
	if (*kitapStok >= *kitapAlimAdedi) {
		*kitapStok -= *kitapAlimAdedi; //
		return ((*kitapAlimAdedi) * (*kitapFiyat));
	}
	else {
		return 1; // E�er stokta almak istedi�iniz miktarda kitap yoksa "1 d�nd�recek".
	}
}

void BookShop::showInfos() {
	cout << " Kitap ad�: " << getName() << endl;
	cout << " Kitap yazar�: " << getYazar() << endl;
	cout << " Kitap t�r�: " << getTur() << endl;
	cout << " Kitap sayfa say�s�: " << getSayfa() << endl;
	cout << " Kitap stok adedi: " << getStok() << endl;
	cout << " Kitap fiyat�: " << getFiyat() << endl;
}
void BookShop::showFatura() {
	if (getFatura() == 1) {
		cout << "\tMaalesef i�leminiz yap�lam�yor!\n\t�stedi�iniz miktarda �r�n stoklar�m�zda yok." << endl;
	}
	else {
		cout << " Ald���n�z kitap: " << *kitapAdi << endl;
		cout << " Toplam tutar: " << getFatura() << " TL" << endl;
	}
}

// Belle�i bo�altt�k.
BookShop::~BookShop() {
	delete kitapAdi;
	delete kitapYazari;
	delete kitapTur;
	delete kitapSayfa;
	delete kitapStok;
	delete kitapFiyat;
}

// Kal�t�lan s�n�flar
Roman::Roman(){}
Roman::Roman(string name, string yazar, string tur, string sayfa, int stok, int fiyat) {
	tur = "Roman";
	Roman::setName(name);
	Roman::setYazar(yazar);
	Roman::setTur(tur);
	Roman::setSayfa(sayfa);
	Roman::setStok(stok);
	Roman::setFiyat(fiyat);
}
Tarih::Tarih(){}
Tarih::Tarih(string name, string yazar, string tur, string sayfa, int stok, int fiyat) {
	tur = "Tarih";
	Tarih::setName(name);
	Tarih::setYazar(yazar);
	Tarih::setTur(tur);
	Tarih::setSayfa(sayfa);
	Tarih::setStok(stok);
	Tarih::setFiyat(fiyat);
}
Bilim::Bilim(){}
Bilim::Bilim(string name, string yazar, string tur, string sayfa, int stok, int fiyat) {
	tur = "Bilim";
	Bilim::setName(name);
	Bilim::setYazar(yazar);
	Bilim::setTur(tur);
	Bilim::setSayfa(sayfa);
	Bilim::setStok(stok);
	Bilim::setFiyat(fiyat);
}
Din::Din(){}
Din::Din(string name, string yazar, string tur, string sayfa, int stok, int fiyat) {
	tur = "Din";
	Din::setName(name);
	Din::setYazar(yazar);
	Din::setTur(tur);
	Din::setSayfa(sayfa);
	Din::setStok(stok);
	Din::setFiyat(fiyat);
}