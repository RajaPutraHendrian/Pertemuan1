#include<iostream>
using namespace std;

/* 	Nama : Raja Putra Hendrian
	NIM	: 2400018160
	Kelas : C
	Soal 5 : buatlah program yang menampilkan pilihan-pilihan menu dari sebuah restoran atau cafe
*/ 

class restoran{
	private:
		int pil, pilMak, pilMin, pilCam, jumlahMak, jumlahMin, jumlahCam;
		int totalMak, totalMin, totalCam, total;
		int hmak[7];
		int hmin[7];
		int hcam[7];
		string namaMak, namaMin, namaCam;
	
	public:
		void makanan() {
			do{
				cout<<"+============ MAKANAN ============+"<<endl;
				cout<<"| 1. Ayam Bakar...............12k |"<<endl;
				cout<<"| 2. Ayam Balado..............14k |"<<endl;
				cout<<"| 3. Steak Ayam...............16k |"<<endl;
				cout<<"| 4. Kare Ayam................12k |"<<endl;
				cout<<"| 5. Udang Asam Manis.........14k |"<<endl;
				cout<<"| 6. Ricebowl.................12k |"<<endl;
				cout<<"| 7. Soto Ayam................12k |"<<endl;
				cout<<"+=================================+"<<endl;
				cout<<"Masukkan Pilihan: ";	cin>>pilMak;
				if(pilMak > 7 || pilMak < 1) {
					cerr<<"Pilihan Menu Tidak Ada!"<<endl;
					system("pause");
					system("cls");
				}
			}
			while(pilMak > 7 || pilMak < 1);
			cout<<"Jumlah: ";	cin>>jumlahMak;
			system("pause");
			system("cls");
		}
		
		void minuman() {
			do{
				cout<<"+============ MINUMAN ============+"<<endl;
				cout<<"| 1. Teh.......................5k |"<<endl;
				cout<<"| 2. Kopi......................5k |"<<endl;
				cout<<"| 3. Es Jeruk..................5k |"<<endl;
				cout<<"| 4. Es Buah...................5k |"<<endl;
				cout<<"| 5. Es Degan..................5k |"<<endl;
				cout<<"| 6. Milkshake.................5k |"<<endl;
				cout<<"| 7. Es Campur................10k |"<<endl;
				cout<<"+=================================+"<<endl;
				cout<<"Masukkan Pilihan: ";	cin>>pilMin;
				if(pilMin > 7 || pilMin < 1) {
					cerr<<"Pilihan Menu Tidak Ada!"<<endl;
					system("pause");
					system("cls");
				}
			}
			while(pilMin > 7 || pilMin < 1);
			cout<<"Jumlah: ";	cin>>jumlahMin;
			system("pause");
			system("cls");
		}
		
		void camilan() {
			do{
				cout<<"+============ CEMILAN ============+"<<endl;
				cout<<"| 1. Kentang Goreng...........12k |"<<endl;
				cout<<"| 2. Telur Mata Sapi..........14k |"<<endl;
				cout<<"| 3. Donat Kentang............16k |"<<endl;
				cout<<"| 4. Salad Buah...............12k |"<<endl;
				cout<<"| 5. Roti Maryam..............14k |"<<endl;
				cout<<"| 6. Pisang Coklat.............9k |"<<endl;
				cout<<"| 7. Coconut Greenball........10k |"<<endl;
				cout<<"+=================================+"<<endl;
				cout<<"Masukkan Pilihan: ";	cin>>pilCam;
				if(pilCam > 7 || pilCam < 1) {
					cerr<<"Pilihan Menu Tidak Ada!"<<endl;
					system("pause");
					system("cls");
				}
			}
			while(pilCam > 7 || pilCam < 1);
			cout<<"Jumlah: ";	cin>>jumlahCam;
			system("pause");
			system("cls");
		}
		
		void data() {
			int tempMak[7] = {12000, 14000, 16000, 12000, 14000, 12000, 12000};
			int tempMin[7] = {5000, 5000, 5000, 5000, 5000, 5000, 10000};
			int tempCam[7] = {12000, 14000, 16000, 12000, 14000, 9000, 10000};
			totalMak = 0, totalMin = 0, totalCam = 0, total = 0;
			
			for(int i = 0; i < 7; i++) {
				hmak[i] = tempMak[i];
				hmin[i] = tempMin[i];
				hcam[i] = tempCam[i];
			}
		}
		
		void main_display() {
			data();
			cout<<"+==== KING'S RESTAURANT ====+"<<endl;
			cout<<"|      Selamat Datang!      |"<<endl;
			cout<<"|      1. Pesan             |"<<endl;
			cout<<"|      2. Gak jadi deh      |"<<endl;
			cout<<"+===========================+"<<endl;
			cout<<"Masukkan Pilihan: ";	cin>>pil;
			
			if(pil == 1) {
				system("cls");
				makanan();
				minuman();
				camilan();
				perhitungan();
				cout<<"Selamat Menikmati^^"<<endl;
			}
			else if(pil == 2){
				cout<<"Cabut....."<<endl;
			}
			else {
				cerr<<"Error: Input Tidak Valid"<<endl;
			}
		}
			
		int perhitungan() {
			switch (pilMak) {
				case 1: namaMak = "Ayam Bakar"; break;
				case 2: namaMak = "Ayam Balado"; break;
				case 3: namaMak = "Steak Ayam"; break;
				case 4: namaMak = "Kare Ayam"; break;
				case 5: namaMak = "Udang Asam Manis"; break;
				case 6: namaMak = "Ricebowl"; break;
				case 7: namaMak = "Soto Ayam"; break;
			}	
			switch (pilMin) {
				case 1: namaMin = "Teh"; break;
				case 2: namaMin = "Kopi"; break;
				case 3: namaMin = "Es Jeruk"; break;
				case 4: namaMin = "Es Buah"; break;
				case 5: namaMin = "Es Degan"; break;
				case 6: namaMin = "Milkshake"; break;
				case 7: namaMin = "Es Campur"; break;
			}		
			switch (pilCam) {
				case 1: namaCam = "Kentang Goreng"; break;
				case 2: namaCam = "Telur Mata Sapi"; break;
				case 3: namaCam = "Donat Kentang"; break;
				case 4: namaCam = "Salad Buah"; break;
				case 5: namaCam = "Roti Maryam"; break;
				case 6: namaCam = "Pisang Coklat"; break;
				case 7: namaCam = "Coconut Greenball"; break;
			}
			
			totalMak = hmak[pilMak-1] * jumlahMak;
			totalMin = hmin[pilMin-1] * jumlahMin;
			totalCam = hcam[pilCam-1] * jumlahCam;
			total = totalMak + totalMin + totalCam;
			
			cout<<"=================== Pesanan Anda ==================="<<endl;
			cout<<"Makanan: "<<namaMak<<" Rp "<<hmak[pilMak-1]<<" * "<<jumlahMak<<"  \t= Rp "<<totalMak<<endl;
			cout<<"Minuman: "<<namaMin<<" Rp "<<hmin[pilMin-1]<<" * "<<jumlahMin<<"\t\t= Rp "<<totalMin<<endl;
			cout<<"Camilan: "<<namaCam<<" Rp "<<hcam[pilCam-1]<<" * "<<jumlahCam<<"\t= Rp "<<totalCam<<endl;
			cout<<"____________________________________________________"<<endl;
			cout<<"Total: Rp "<<total<<endl<<endl;
		}
}; 

int main() {
	restoran menu;
	menu.main_display();
	
	return 0;
}
