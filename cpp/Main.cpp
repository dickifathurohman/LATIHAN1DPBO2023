#include <bits/stdc++.h>
#include "Mahasiswa.cpp"
#include "Crud.cpp"

using namespace std;

int main(){

	//deklarasi string inputan
	string nim, nama, gender, prodi, fakultas; 
	string command;

	//membuat objek crud dengan nama ex
	Crud ex;

	//membuat objek mahasiswa
	Mahasiswa temp;

	do{
		cout << "Please insert your command (add/update/delete/show/exit) : "; 
		cin >> command; //minta masukan perintah yang diinginkan

		if(command == "show"){ //jika show
			ex.show(); //panggil crud show untuk menampilkan data
		}
		else if(command == "add"){ //jika add

			//minta masukan data
			cout << "\nPlease input your data correctly!\n";
			cout << "Student ID / NIM : ";
			cin >> nim;
			cout << "Name : ";
			cin >> nama;
			cout << "Gender : ";
			cin >> gender;
			cout << "Degree : ";
			cin >> prodi;
			cout << "Faculty : ";
			cin >> fakultas;

			//set value datanya menggunakan setter
			temp.set_nim(nim);
			temp.set_nama(nama);
			temp.set_gender(gender);
			temp.set_prodi(prodi);
			temp.set_fakultas(fakultas);

			ex.add(temp); //kemudian panggil prosedur untuk menambahkan data
		}
		else if(command == "update"){ //jika update

			//minta masukan nim yang ingin di update
			cout << "\nPlease Insert the Student ID/NIM of the student you want to update : ";
			cin >> nim;

			//minta masukan data baru
			cout << "Update your data!\n";
			cout << "Name : ";
			cin >> nama;
			cout << "Gender : ";
			cin >> gender;
			cout << "Degree : ";
			cin >> prodi;
			cout << "Faculty : ";
			cin >> fakultas;

			//set value datanya dengan setter
			temp.set_nim(nim);
			temp.set_nama(nama);
			temp.set_gender(gender);
			temp.set_prodi(prodi);
			temp.set_fakultas(fakultas);

			ex.update(temp); //panggil fungsi update
		}
		else if(command == "delete"){ //jika delete
			cout << "\nPlease Insert the Student ID/NIM of the student you want to delete : ";
			//minta masukan nim yang ingin dihapus datanya
			cin >> nim;
			//set nim
			temp.set_nim(nim);

			ex.del(temp); //panggil prosedur del pada crud

		}
		else if(command == "exit"){ //jika exit
			cout << "Thank you for using this program :D\n"; //tampilkan terimakasih
		}
		else{ //jika bukan ke 5 perintah diatas
			cout << "Wrong command!\n"; //tampilkan perintah salah
		}

	}while(command != "exit"); //perulangan selama perintahnya bukan exit


	return 0;

}