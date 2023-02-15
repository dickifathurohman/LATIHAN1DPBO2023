#include <iostream>
#include <string>

using namespace std;

//deklarasi kelas mahasiswa
class Mahasiswa
{

	//atribut untuk kelas mahasiswa
	private:
		//semua atribut bertipe string
		string nim;
		string nama;
		string gender;
		string prodi;
		string fakultas;

	public:

		//constructor
		Mahasiswa(){
			this->nim = "";
			this->nama = "";
			this->gender = "";
			this->prodi = "";
			this->fakultas = "";
		}

		//constructor dengan parameter berupa atributnya
		Mahasiswa(string nim, string nama, string gender, string prodi, string fakultas){
			this->nim = nim;
			this->nama = nama;
			this->gender = gender;
			this->prodi = prodi;
			this->fakultas = fakultas;
		}


		//setter untuk tiap atribut (untuk mengubah value atribut)

		void set_nim(string nim){
			this->nim = nim;
		}

		void set_nama(string nama){
			this->nama = nama;
		}

		void set_gender(string gender){
			this->gender = gender;
		}

		void set_prodi(string prodi){
			this->prodi = prodi;
		}

		void set_fakultas(string fakultas){
			this->fakultas = fakultas;
		}


		//getter untuk tiap atribut (untuk mendapatkan value atribut)
		string get_nim(){
			return this->nim;
		}

		string get_nama(){
			return this->nama;
		}

		string get_gender(){
			return this->gender;
		}

		string get_prodi(){
			return this->prodi;
		}

		string get_fakultas(){
			return this->fakultas;
		}

		//destructor
		~Mahasiswa(){

		}

};