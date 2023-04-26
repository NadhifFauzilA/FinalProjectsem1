#include <iostream>
#include <conio.h> //FUNGSI GETCH()
#include <vector>
#include <windows.h>
using namespace std;
// DEKLARASI VARIABEL GLOBAL
string nama,Pass,pilihanbarang,discount,kodebuku,kodebukuB,kodebukuC,kodebukuD;
	int pilihan,jmlbuku,Rdiskon,diskonitem,totalpembayaran;
	//DEKLARASI HARGA GLOBAL
	int harga[11] = {50000,45000,30000,32000,45000,40000,110000,120000,100000,130000,140000};
	//DEKLARASI NAMA BUKU GLOBAL
	 string buku[11]={"Fiksi","Non-Fiksi","Romance","Horor","Sejarah","Petualangan","sejarahindo","sejarahluar","Paket A","Paket B","Paket C"};
	 string kodediskon = "AMIKOM" ;
	 int totaldiskon = 2;
// VOID BAR
void mbar (int b) {
if (b == 1){
cout << "  =============================== \n";
}else if (b == 2) {
cout << " jawab : ";
}else if (b == 3) {
cout << " Ketikan : ";
}else if (b == 4) {
cout <<" Enter To continue ";	
}else if (b == 5) {
cout <<" Masukan Kode Diskon *tidak punya? ketik N : " ;
}else if (b == 6) {
cout <<"|----------------------------------------------|"<<endl;
}else if (b == 7) {
cout<<" ANDA MENDAPATKAN DISKON SEBESAR "<< totaldiskon <<" %" <<endl;
}
}
// VOID MENU PEMBAYARAN
void pembayarandiskon (string nama, string buku, int harga, int jumlah){
Rdiskon = (harga - ((harga * totaldiskon) / 100)) * jumlah;
diskonitem = (harga * totaldiskon) / 100;
	cout <<" ||Nama Pembeli               = " <<nama<< endl;
	cout <<" ||jenis buku yang anda pilih = " <<buku<< endl;
	cout <<" ||Jumlah Pembelian           = " <<jumlah<< endl;
	cout <<" ||Harga Normal               = " <<harga<< endl;
	cout <<" ||Jumlah Harga               = "<<"Rp." << Rdiskon << endl;
	cout <<" ||Diskon / item              = "<<"Rp." <<diskonitem<< endl;

	cout<<"Masukan Nominal Pembayaran : " ;
	cin >> totalpembayaran;
	if(totalpembayaran >= Rdiskon){
mbar(1);
int kembalian = totalpembayaran - Rdiskon;
cout<<"total pembayaran anda adalah : "<<totalpembayaran<<endl;
cout<<"Total kembalian anda adalah  : "<<kembalian<<endl;

	}else {
		mbar(1);
		cout<<"Nominal Tidak mencukupi"<<endl;
	}
}
void pembayarannormal (string nama, string buku, int harga, int jumlah) {
	int jumlahharga = jumlah * harga;
	cout <<" ||Nama Pembeli                =" <<nama<< endl;
	cout <<" ||jenis buku yang anda pilih = " <<buku<< endl;
	cout <<" ||Jumlah Pembelian           = " <<jumlah<< endl;
	cout <<" ||Jumlah Harga               = " <<"Rp. "<< jumlahharga << endl;

	cout<<"Masukan Nominal Pembayaran : " ;
	cin >> totalpembayaran;

	if(totalpembayaran >= jumlahharga){
mbar(1);
int kembalian = totalpembayaran - jumlahharga;
cout<<"total pembayaran anda adalah : "<<totalpembayaran<<endl;
cout<<"Total kembalian anda adalah  : "<<kembalian<<endl;

	}else {
		mbar(1);
		cout<<"Nominal Tidak mencukupi"<<endl;
	}
}
// MAIN
int main () {
	// MENU BAR
	system("color B");
	// MENU LOGIN
 mbar(6);
 cout <<"|        SELAMAT DATANG SILAHKAN LOGIN         |"<<endl;
 mbar(6);
 cout <<"|        MASUKAN USERNAME DAN PASSWORD         |"<<endl;
 mbar(6);
	cout <<" MASUKAN USERNAME : " ;
	cin >> nama;
	password: // PASSWORD
    cout <<" MASUKAN PASSWORD : " ;
	cin >> Pass;
	//BATAS MENU LOGIN
	system ("cls");
	//MENU
	 if (Pass == "admin" || Pass == "amikom" ) {
	 //menu
 	 menu: // MENU
 	 	system("cls");
 	 	system("color B");
 cout <<"|----------------------------------------------|"<<endl;
 cout <<"|               PEMBELIAN BUKU                 |"<<endl;
 cout <<"|               HAI "<<nama<< "                    |"<<endl;
 cout <<"|----------------------------------------------|"<<endl;
 cout <<"|MENU | DAFTAR DAN HARGA   | KODE | 1          |"<<endl;
 cout <<"|     | PEMBELIAN          |      | 2          |"<<endl;
 cout <<"|     | ABOUT              |      | 3          |"<<endl;
 cout <<"|     | EXIT               |      | 4          |"<<endl;
 cout <<"|----------------------------------------------|"<<endl;
	cout <<"KETIKAN MENU YANG DIPILIH" << endl;
	mbar(3);
	cin >> pilihan;
	mbar(1);
	system("cls");
	//MENU DAFTAR DAN HARGA
	if (pilihan == 1) {
	for(int i=0; i<=10; i++){
	cout <<" ---------------------------------------"<<endl;
	cout <<"         "<<i+1<< ". " << buku[i]<<endl;
	cout <<"            RP." << harga[i] <<endl;

}
	mbar(4);
	getch();
	goto menu;
	}
	//Pembelian Barang
	else if (pilihan == 2) {
	//DAFTAR BARANG
	mbar(1);
	cout <<" ||        DAFTAR KODE BUKU       ||" << endl;
	mbar(1);
	cout <<" ||A||.BUKU CERITA                || " << endl;
	cout <<" ||B||.BUKU NOVEL                 ||" << endl;
	cout <<" ||C||.BUKU SEJARAH               ||" << endl;
	cout <<" ||D||.BUKU PELAJARAN             ||" << endl;
	mbar(1);
	cout <<"KETIKAN KODE BUKU" << endl;
	mbar(3);
	cin >> pilihanbarang;
	mbar(1);
	system("cls");
	
	
	if (pilihanbarang == "A" || pilihanbarang == "a" ) {
	mbar(1);
	cout <<" ||         DAFTAR BUKU CERITA       ||" << endl;
	mbar(1);
	cout <<" ||F||.BUKU CERITA FIKSI ||  50.000 || " << endl;
	cout <<" ||N||.BUKU NON FIKSI    ||  45.000 || " << endl;
	cout <<" ||-||.ON GOING          ||         ||" << endl;
	cout <<" ||-||.ON GOING          ||         ||" << endl;
	mbar(1);
	cout <<"Masukan kode buku" << endl;
	mbar(3);
	cin >>kodebuku;
		if(kodebuku == "F" || kodebuku == "f"){
		
		cout <<"Anda memilih Buku fiksi"<< endl;
		cout <<"masukan jumlah buku"<< endl;
		mbar(3);
		cin>>jmlbuku;
		mbar(5);
		cin>>discount;
		system("cls");
		if(discount == kodediskon ){
	mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[0],harga[0],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
		}
		else {
	mbar(1);
	pembayarannormal(nama,buku[0],harga[0],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
		}
}
else if (kodebuku == "N" || kodebuku == "n") {
		cout <<"Anda memilih buku Non Fiksi"<< endl;
		cout <<"masukan jumlah buku"<< endl;
		mbar(3);
		cin>>jmlbuku;
		mbar(5);
		cin >> discount;
		system("cls");
		//output

		if(discount == kodediskon ){
	mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[1],harga[1],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
		}
		else {
	mbar(1); 
	pembayarannormal(nama,buku[1],harga[1],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
		}
	}  //BATAS BUKU CERITA FIKSI 

//BUKU NOVEL		
	}
    else if(pilihanbarang== "B" || pilihanbarang =="b") {
    		mbar(1);
	cout <<" ||         DAFTAR BUKU NOVEL       ||" << endl;
	mbar(1);
	cout <<" ||R||.NOVEL ROMANCE     ||  30.000 || " << endl;
	cout <<" ||H||.NOVEL HOROR       ||  32.000 || " << endl;
	cout <<" ||S||.NOVEL SEJARAH     ||  45.000 ||" << endl;
	cout <<" ||P||.NOVEL PETUALANGAN ||  40.000 ||" << endl;
	mbar(1);
	cout <<"Masukan kode buku" << endl;
	mbar(3);
	cin >>kodebukuB;
	if (kodebukuB =="R" || kodebukuB == "r"){
		cout <<"Anda memilih buku romance"<< endl;
		cout <<"masukan jumlah buku"<< endl;
		mbar(3);
		cin>>jmlbuku;
		mbar(5);
		cin >> discount;
		system("cls");
		
		//output
		if (discount == kodediskon ) {
				mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[2],harga[2],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
			
		}
		else {
		
	mbar(1); 
	pembayarannormal(nama,buku[2],harga[2],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
}
		//KODE BUKU HORROR
	}else if (kodebukuB == "H" || kodebukuB == "h"){
		cout <<"Anda memilih buku Horor"<< endl;
		cout <<"masukan jumlah buku"<< endl;
		mbar(3);
		cin>>jmlbuku;
		mbar(5);
		cin >> discount;
		system("cls");
		if (discount == kodediskon  ) {
				mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[3],harga[3],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;	
		}
		else {
		
	mbar(1);
	pembayarannormal(nama,buku[3],harga[3],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
}
//KODE BUKU SEJARAH
	}
	else if (kodebukuB == "S" || kodebukuB == "s"){
		cout <<"Anda memilih buku Sejarah"<< endl;
		cout <<"masukan jumlah buku"<< endl;
		mbar(3);
		cin>>jmlbuku;
		mbar(5);
		cin >> discount;
		system("cls");
		if (discount == kodediskon ) {
				mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[4],harga[4],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
			
		}
	else {
		mbar(1);
	pembayarannormal(nama,buku[4],harga[4],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
}
	}
	else if (kodebukuB == "P" || kodebukuB =="p"){
		cout <<"Anda memilih buku Petualangan"<< endl;
		cout <<"masukan jumlah buku"<< endl;
		mbar(3);
		cin>>jmlbuku;
		mbar(5);
		cin >> discount;
		system("cls");
		if (discount == kodediskon ){
			mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[5],harga[5],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;		
		} else {
		
	mbar(1);
	pembayarannormal(nama,buku[5],harga[5],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
	}
	}
	}
	else if (pilihanbarang == "C" || pilihanbarang == "c") {
		mbar(1);
	cout <<" ||        DAFTAR BUKU SEJARAH      ||" << endl;
	mbar(1);
	cout <<" ||SI||.SEJARAH INDONESIA    ||  110.000 || " << endl;
	cout <<" ||SL||.SEJARAH LUAR         ||  120.000 || " << endl;
	mbar(1);
	cout <<"Masukan kode buku" << endl;
	mbar(3);
	cin >>kodebukuC;
	if (kodebukuC == "SI" || kodebukuC == "si")	{
		cout <<"Anda memilih buku sejarah Indonesia"<< endl;
		cout <<"masukan jumlah buku"<< endl;
		mbar(3);
		cin>>jmlbuku;
		mbar(5);
		cin >> discount;
		system("cls");
	if (discount == kodediskon ){
		mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[6],harga[6],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
} else {
	mbar(1);
	pembayarannormal(nama,buku[6],harga[6],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;

}
	}
	else if (kodebukuC == "SL" || kodebukuC == "sl" ) {
		cout <<"Anda memilih buku Sejarah Luar"<< endl;
		cout <<"masukan jumlah buku"<< endl;
			mbar(3);
		cin>>jmlbuku;
		mbar(5);
		cin >> discount;
		system("cls");
		if (discount == kodediskon ){
			mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[7],harga[7],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
} else {
	mbar(1);
	pembayarannormal(nama,buku[7],harga[7],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
	
}
	}	
	}
	else if (pilihanbarang == "D" || pilihanbarang == "d"){
	mbar(1);
		cout <<" ||       DAFTAR BUKU PELAJARAN      ||" << endl;
	mbar(1);
	cout <<" ||PA||.PAKET A     	     ||  100.000 || " << endl;
	cout <<" ||PB||.PAKET B     	     ||  130.000 || " << endl;
	cout <<" ||PC||.PAKET C     	     ||  140.000 || " << endl;
	mbar(1);
	cout <<"Masukan kode buku" << endl;
	mbar(3);
	cin >>kodebukuD;
	//Buku Paket A
		if (kodebukuD == "PA" || kodebukuD == "pa") {
	cout <<"Anda memilih Paket A"<< endl;
	cout <<"masukan jumlah buku"<< endl;
	mbar(3);
	cin>>jmlbuku;
	mbar(5);
	cin >> discount;
	system("cls");
		if (discount == kodediskon ){
	mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[8],harga[8],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;
		} else {
	mbar(1);
	pembayarannormal(nama,buku[8],harga[8],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;	
			
		}	
		}
	if (kodebukuD == "PB" || kodebukuD == "pb") {
	cout <<"Anda memilih Paket B"<< endl;
	cout <<"masukan jumlah buku"<< endl;
	mbar(3);
	cin>>jmlbuku;
	mbar(5);
	cin >> discount;
	system("cls");
		if (discount == kodediskon ) {
	mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[9],harga[9],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;	
		} else {
	mbar(1);
	pembayarannormal(nama,buku[9],harga[9],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;		
		}
	
	
		}	if (kodebukuD == "PC" || kodebukuD == "pc") {
			cout <<"Anda memilih Paket B"<< endl;
	cout <<"masukan jumlah buku"<< endl;
	mbar(3);
	cin>>jmlbuku;
	mbar(5);
	cin >> discount;
	system("cls");
	if (discount == kodediskon ) {
	mbar(7);
	mbar(1);
	pembayarandiskon(nama,buku[10],harga[10],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;		
		}else {
		mbar(1);
	pembayarannormal(nama,buku[10],harga[10],jmlbuku);
	mbar(1);
	mbar(4);
	getch();
	goto menu;		
			
			
			
		}
		}
	}
}
else if (pilihan == 3) {
mbar(1);
cout<<" 		ABOUT		"<<endl;
mbar(1);
cout<< "22.11.5005 ERKA SAPUTRA " <<endl;
cout<< "22.11.5008 HELPYN IDONESIANUS " <<endl;
cout<< "22.11.5013 WILLIAM JONATHAN BUTAR BUTAR " <<endl;
cout<< "22.11.5018 DWI FERDIYANTO " <<endl;
cout<< "22.11.5035 NADHIF FAUZIL ADHIM " <<endl;
cout<< "22.11.5041 JULIAN KIYOSAKI HANANTA " <<endl;
cout<< "22.11.5060 RIF'AA SUROSOSASTRO SUBEKTI " <<endl;
cout<<endl;
mbar(4);
getch();
goto menu;
}
else if (pilihan == 4){
	cout << "ENTER TO EXIT" << endl;
	getch();
	for (int i = 0; i < 15; i++){
		cout << char(219);
		Sleep(100);
	}
	exit(0);
}
else {
	cout<<"Opsi anda salah jalankan ulang program"<<endl;
	mbar(4);
	getch();
	exit(0);
}
}
else {
	system("color 4");
	cout <<"password anda salah mohon ulangi" << endl;
	goto password; //JIKA PASSWORD SALAH

}
system("color 4");
cout << "INVALID NUMBER, OPSI SALAH"<< endl;
getch();
goto menu;

}
