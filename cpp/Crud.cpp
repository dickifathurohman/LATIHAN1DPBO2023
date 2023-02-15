#include <iostream>
#include <string>

using namespace std;

//deklarasi kelas crud
class Crud{
	
	private:
		vector<Mahasiswa> mhslist;
		vector<string> nimlist;
	public:

		Crud(){

		}

		void show(){
			
			if(mhslist.size() == 0){
				cout << "\nThere is no data, please add data first\n";
			}
			else{
				cout << "\nList of Student :\n";
				for(int i = 0; i < mhslist.size(); i++){
					cout << (i+1) << "." << mhslist[i].get_nim() << " | " << mhslist[i].get_nama() << " | " 
					<< mhslist[i].get_gender() << " | " << mhslist[i].get_fakultas() << " | " << mhslist[i].get_prodi() << "\n";
				}
			}
		}

		void add(Mahasiswa temp){
			if(find(nimlist.begin(), nimlist.end(), temp.get_nim()) != nimlist.end()){
				cout << "\nStudent ID/NIM is already used, please use another ID/NIM\n";
			}
			else{
				this->mhslist.push_back(temp);
				this->nimlist.push_back(temp.get_nim());

				cout << "\nYour data has been succesfully added!\n";
			}
		}

		void update(Mahasiswa temp){
			auto x = find(nimlist.begin(), nimlist.end(), temp.get_nim());
			if(x == nimlist.end()){
				cout << "\nWe couldn't find your ID/NIM, please make sure you type it right\n";
			}
			else{
				int i = distance(nimlist.begin(), x);
				// nimlist[i] = temp.get_nim();
				// mhslist[i].set_nim(temp.get_nim());
				mhslist[i].set_nama(temp.get_nama());
				mhslist[i].set_gender(temp.get_gender());
				mhslist[i].set_prodi(temp.get_prodi());
				mhslist[i].set_fakultas(temp.get_fakultas());

				cout << "\nYour data has been succesfully updated!\n";
			}
		}

		void del(Mahasiswa temp){
			auto x = find(nimlist.begin(), nimlist.end(), temp.get_nim());
			if(x == nimlist.end()){
				cout << "\nWe couldn't find your ID/NIM, please make sure you type it right\n";
			}
			else{
				nimlist.erase(x);
				mhslist.erase(mhslist.begin() + distance(nimlist.begin(), x));

				cout << "\nYour data has been succesfully deleted!\n";
			}
		}

};