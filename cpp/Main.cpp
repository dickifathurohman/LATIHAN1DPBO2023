#include <bits/stdc++.h>
#include "Mahasiswa.cpp"
#include "Crud.cpp"

using namespace std;

int main(){

	string nim, nama, gender, prodi, fakultas;
	string order;

	Crud ex;

	Mahasiswa temp;

	int i, menu = 0;

	do{
		cout << "Please insert your order (add/update/delete/show/exit) : "; 
		cin >> order;

		if(order == "show"){
			ex.show();
		}
		else if(order == "add"){
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

			temp.set_nim(nim);
			temp.set_nama(nama);
			temp.set_gender(gender);
			temp.set_prodi(prodi);
			temp.set_fakultas(fakultas);

			ex.add(temp);
		}
		else if(order == "update"){
			cout << "\nPlease Insert the Student ID/NIM of the student you want to delete : ";
			cin >> nim;
			cout << "Update your data!\n";
			cout << "Name : ";
			cin >> nama;
			cout << "Gender : ";
			cin >> gender;
			cout << "Degree : ";
			cin >> prodi;
			cout << "Faculty : ";
			cin >> fakultas;

			temp.set_nim(nim);
			temp.set_nama(nama);
			temp.set_gender(gender);
			temp.set_prodi(prodi);
			temp.set_fakultas(fakultas);

			ex.update(temp);
		}
		else if(order == "delete"){
			cout << "\nPlease Insert the Student ID/NIM of the student you want to delete : ";

			cin >> nim;

			temp.set_nim(nim);

			ex.del(temp);

		}
		else{
			cout << "Wrong order!\n";
		}

	}while(order != "exit");


	return 0;

}