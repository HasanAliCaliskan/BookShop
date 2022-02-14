#include <iostream>
#include "Bookshop.h"
#include <map>
using namespace std;

struct AccountData   // hesap verilerinin tutulmas�.
{
	string systemNickName;
	string systemEmailAddress;
	string systemPassword;
	string systemCreditCard;
	int systemBirth[3];
};

void loginToAccount(AccountData *ptr)  // hesaba giri� fonksiyonu.
{
	string nick, email, password, creditCard;
	std::cout << " Kullan�c� ad�n�z: "; cin >> nick;
	std::cout << " E-posta adresiniz: "; cin >> email;
	std::cout << " �ifreniz: "; cin >> password;
	std::cout << " Kredi kart� numaran�z: "; cin >> creditCard;
	std::cout << endl;
	// kontrol ifadesi
	if (nick == ptr->systemNickName && email == ptr->systemEmailAddress && password == ptr->systemPassword && creditCard == ptr->systemCreditCard) {
		std::cout << "\tHesaba giri� yapt�n�z..." << endl << endl;
	}
	else {
		std::cout << "\tGirilen bilgiler yanl��!" << endl;
	}
}

void newAccount(AccountData *ptr)   //yeni hesap olu�turma fonksiyonu.
{
	std::cout << " Kullan�c� ad�n�z: "; cin >> ptr->systemNickName;
	std::cout << " E-posta adresiniz: "; cin >> ptr->systemEmailAddress;
	std::cout << " �ifreniz: "; cin >> ptr->systemPassword;
	std::cout << " Kredi kart� numaran�z: "; cin >> ptr->systemCreditCard;
	std::cout << " Do�um tarihiniz (�rn: 12 3 1956): "; cin >> ptr->systemBirth[0] >> ptr->systemBirth[1] >> ptr->systemBirth[2];
	std::cout << endl;
	std::cout << " Hesab�n�z ba�ar�l� bir �ekilde olu�turuldu!\n Hesab�n�za giriniz..." << endl << endl;
}

void mainScreen(AccountData test_data) // Ana ekran fonksiyonu.
{
	int tercih;
	std::cout << "\n\t\t K�TAP MA�ZASINA HO�GELD�N�Z!" << endl << endl;
	std::cout << "\tHesab�n�za girmek i�in 1'e bas�n�z.\n\tE�er hesab�n�z yoksa yeni hesap a�mak i�in 2'ye bas�n�z.";
	cin >> tercih; std::cout << endl;

	if (tercih == 1) {
		loginToAccount(&test_data); // Hesaba giri� yapma.
	}
	else if (tercih == 2) {
		newAccount(&test_data); // Yeni hesap olu�turma.
		loginToAccount(&test_data); // Hesaba giri� yapma.
	}
	else {
		std::cout << "HATA!\nYaln�zca yukar�daki say�lardan birini giriniz...";
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	AccountData data = { "0","0","0","0",{0,0,0} }; // Sistemde default olarak bu �ekilde sakl�.

	// Nesneleri olu�turma i�lemi.
	Roman* obj1 = new Roman[5];
	Tarih* obj2 = new Tarih[5];
	Bilim* obj3 = new Bilim[5];
	Din* obj4 = new Din[5];

	int nesne_sayisi = 20; // Olu�turulacak nesne say�s�.

	mainScreen(data); // Ana ekran

	// NESNELER� D�ZENLEME
	std::cout << "\n   UYGULAMAYA K�TAP EKLEME " << endl << endl;
	for (int i = 0; i < nesne_sayisi; i++) {
		string ad, yazar, sayfa;
		int stok, fiyat;
		std::cout << " *** ROMANLAR ***" << endl;
		std::cout << " Kitab�n ad�: "; cin >> ad; obj1[i].setName(ad);
		std::cout << " Kitab�n yazar�: "; cin >> yazar; obj1[i].setYazar(yazar); obj1[i].setTur("roman");
		std::cout << " Kitab�n sayfas�: "; cin >> sayfa; obj1[i].setSayfa(sayfa);
		std::cout << " Kitab�n stok say�s�: "; cin >> stok; obj1[i].setStok(stok);
		std::cout << " Kitab�n fiyat�: "; cin >> fiyat; obj1[i].setFiyat(fiyat); std::cout << endl << endl;
		std::cout << " *** TAR�H K�TAPLARI ***" << endl;
		std::cout << " Kitab�n ad�: "; cin >> ad; obj2[i].setName(ad);
		std::cout << " Kitab�n yazar�: "; cin >> yazar; obj2[i].setYazar(yazar); obj2[i].setTur("tarih");
		std::cout << " Kitab�n sayfas�: "; cin >> sayfa; obj2[i].setSayfa(sayfa);
		std::cout << " Kitab�n stok say�s�: "; cin >> stok; obj2[i].setStok(stok);
		std::cout << " Kitab�n fiyat�: "; cin >> fiyat; obj2[i].setFiyat(fiyat); std::cout << endl << endl;
		std::cout << " *** B�L�M K�TAPLARI ***" << endl;
		std::cout << " Kitab�n ad�: "; cin >> ad; obj3[i].setName(ad);
		std::cout << " Kitab�n yazar�: "; cin >> yazar; obj3[i].setYazar(yazar); obj3[i].setTur("bilim");
		std::cout << " Kitab�n sayfas�: "; cin >> sayfa; obj3[i].setSayfa(sayfa);
		std::cout << " Kitab�n stok say�s�: "; cin >> stok; obj3[i].setStok(stok);
		std::cout << " Kitab�n fiyat�: "; cin >> fiyat; obj3[i].setFiyat(fiyat); std::cout << endl << endl;
		std::cout << " *** D�N K�TAPLARI ***" << endl;
		std::cout << " Kitab�n ad�: "; cin >> ad; obj4[i].setName(ad);
		std::cout << " Kitab�n yazar�: "; cin >> yazar; obj4[i].setYazar(yazar); obj4[i].setTur("din");
		std::cout << " Kitab�n sayfas�: "; cin >> sayfa; obj4[i].setSayfa(sayfa);
		std::cout << " Kitab�n stok say�s�: "; cin >> stok; obj4[i].setStok(stok);
		std::cout << " Kitab�n fiyat�: "; cin >> fiyat; obj4[i].setFiyat(fiyat); std::cout << endl << endl;
	}

	// K�TAP B�LG�LER�
	std::cout << " *** ROMANLAR ***" << endl;
	for (int i = 0; i < nesne_sayisi; i++) {
		obj1[i].showInfos(); std::cout << endl;
	}
	std::cout << endl;
	std::cout << " *** TAR�H K�TAPLARI ***" << endl;
	for (int i = 0; i < nesne_sayisi; i++) {
		obj2[i].showInfos(); std::cout << endl;
	}
	std::cout << endl;
	std::cout << " *** B�L�M K�TAPLARI ***" << endl;
	for (int i = 0; i < nesne_sayisi; i++) {
		obj3[i].showInfos(); std::cout << endl;
	}
	std::cout << endl;
	std::cout << " *** D�N K�TAPLARI ***" << endl;
	for (int i = 0; i < nesne_sayisi; i++) {
		obj4[i].showInfos(); std::cout << endl;
	}
	std::cout << endl;

	// Nesneleri container'a atama i�lemi.
	map<int, Roman> blok1;
	map<int, Tarih> blok2; 
	map<int, Bilim> blok3;
	map<int, Din> blok4;
	for (int i = 0; i < 5; i++) {
		blok1[i] = obj1[i];
		blok2[i] = obj2[i];
		blok3[i] = obj3[i];
		blok4[i] = obj4[i];
	}

	// Nesnelerin silinmesi.
	delete[] obj1;
	delete[] obj2;
	delete[] obj3;
	delete[] obj4;

	return 0;
}