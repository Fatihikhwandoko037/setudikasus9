#include <iostream>
using namespace std;

class buku{
	public:
		void input();
		void proses();
		void output();
		
	private:
		string array [35];
		string tipe[10][3];
		int banyak,n,t;
};

void buku :: input(){
	cout << "Masukkan Jumlah Data Buku :";
	cin >> banyak;
	t = banyak * 3;
	for(int i=0; i < t; i++){
		cout << "Masukkan Jenis Buku  : ";
    cin >> array[i];
		i++;
		cout << "Masukkan Judul Buku  : ";
		cin >> array[i];
		i++;
		cout << "Masukkan Penulis Buku: ";
		cin >> array[i];
		cout << endl;
	}
}

void buku :: proses(){
	n = 0;
	for(int i=0; i <banyak; i++){
		for (int j=0; j < 3; j++){
			tipe[i][j] = array[n];
			n++;
		}
	}
}

void buku :: output(){
  cout << "======================================================"<<endl;
  cout << "Jenis Buku  ||" << "   Judul  ||" << "  Penulis    ||"<<endl;
  cout << "======================================================"<<endl;

  
	for(int i =0 ;i <banyak;i++){
		for(int j =0; j < 3; j++){
			cout << tipe[i][j] << "        ";
			
		}
		cout << endl;
	}
}

int main(){
	buku c;
	c.input();
	c.proses();
	c.output();
}