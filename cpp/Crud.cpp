#include <iostream>
#include <string>

using namespace std;

//deklarasi kelas crud
class Crud{
	
	private:
		vector<Mahasiswa> mhslist; //untuk list yang berisikan atribut mahasiswa
		vector<string> nimlist; //untuk list yang berisikan hanya atribut nim nya saja sebagai primary key
	public:

		//constructor
		Crud(){

		}

		//prosedur untuk menampilkan data dalam list
		void show(){
			
			//jika list sizenya sama dengan 0 (tidak ada data)
			if(mhslist.size() == 0){
				cout << "\nThere is no data, please add data first\n";
			} //jika tidak sama dengan 0 (ada data)
			else{
				cout << "\nList of Student :\n";

				//print datanya sebanyak banyaknya data dalam list mahasiswa
				for(int i = 0; i < mhslist.size(); i++){
					cout << (i+1) << "." << mhslist[i].get_nim() << " | " << mhslist[i].get_nama() << " | " 
					<< mhslist[i].get_gender() << " | " << mhslist[i].get_fakultas() << " | " << mhslist[i].get_prodi() << "\n";
				}
			}
		}

		//prosedur untuk menambahkan data
		void add(Mahasiswa temp){
			//menggunakan fungsi find untuk mencari data dengan nim yang sama pada list nim
			//jika hasilnya tidak sama dengan akhir dari nimlist, berarti data ditemukan
			if(find(nimlist.begin(), nimlist.end(), temp.get_nim()) != nimlist.end()){
				//karena nim yang ingin ditambahkan sudah ada pada data
				//maka tampilkan pesan nim sudah digunakan
				cout << "\nStudent ID/NIM is already used, please use another ID/NIM\n";
			}
			else{ //jika tidak

				this->mhslist.push_back(temp); //masukkan semua atribut ke dalam list mahasiswa
				this->nimlist.push_back(temp.get_nim()); //dan masukan nim saja ke dalam list nim

				cout << "\nYour data has been succesfully added!\n";
			}
		}

		//prosedur untuk mengupdate atau mengubah data
		void update(Mahasiswa temp){

			//pointer x dicari menggunakan fungsi find pada list nim dengan mencocokan nim masukannya
			auto x = find(nimlist.begin(), nimlist.end(), temp.get_nim());
			if(x == nimlist.end()){ //jika hasilnya akhir dari list nim (tidak ada nim yg sama pada data)
				cout << "\nWe couldn't find your ID/NIM, please make sure you type it right\n";
			}
			else{ //jika nim yang sama ditemukan

				//maka ambil indexnya dengan menggunakan fungsi distance (selisih dari pointer elemen awal dan pointer x)
				int i = distance(nimlist.begin(), x);

				//kemudian update atribut selain nim
				mhslist[i].set_nama(temp.get_nama());
				mhslist[i].set_gender(temp.get_gender());
				mhslist[i].set_prodi(temp.get_prodi());
				mhslist[i].set_fakultas(temp.get_fakultas());

				cout << "\nYour data has been succesfully updated!\n";
			}
		}

		//prosedur untuk menghapus data
		void del(Mahasiswa temp){

			//mencari pointer x dengan mencari nim yang sama
			auto x = find(nimlist.begin(), nimlist.end(), temp.get_nim());
			if(x == nimlist.end()){ //jika tidak ditemukan
				cout << "\nWe couldn't find your ID/NIM, please make sure you type it right\n";
			}
			else{ //jika ditemukan

				nimlist.erase(x); //hapus pada list nim dengan index x
				mhslist.erase(mhslist.begin() + distance(nimlist.begin(), x)); //hapus juga pada list mahasiswa
				//pada list mahasiswa x tidak bisa langsung digunakan karena merupakan pointer list nim

				cout << "\nYour data has been succesfully deleted!\n";
			}
		}

		//destructor
		~Crud(){

		}

};