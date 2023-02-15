import java.util.ArrayList;

//deklarasi kelas Crud
public class Crud {
	private ArrayList<Mahasiswa> mhslist; //deklarasi list untuk list mahasiswa
	private ArrayList<String> nimlist; //untuk list nim

	//constructor
	Crud() {
		mhslist = new ArrayList<Mahasiswa>();
		nimlist = new ArrayList<String>();
	}

	//prosedur untuk menambahkan data
	public void add(Mahasiswa temp){
		int x = nimlist.indexOf(temp.get_nim()); //mencari apakah nim sudah ada pada list
		if(x == -1){ //jika hasil indexnya -1, berarti tidak ada

			//maka tambahkan ke list
			this.nimlist.add(temp.get_nim());
			this.mhslist.add(temp);

			System.out.println("Your data has been succesfully added!");
		}
		else{
			System.out.println("Student ID/NIM is already used, please use another ID/NIM");
		}
	}

	//prosedur untuk menghapus data
	public void del(Mahasiswa temp){
		int x = nimlist.indexOf(temp.get_nim()); //mencari apakah nim ada pada list
		if(x == -1){ //jika tidak ada
			System.out.println("Sorry we couldn't find ID/NIM, please make sure you type it right");
		}
		else{ //jika ditemukan adanya data pada list dengan nim yg sama dengan masukan

			//maka panggil prosedur untuk menghapus data pada list
			nimlist.remove(x);
			mhslist.remove(x);

			System.out.println("Your data has been succesfully deleted!");
		}
	}

	//prosedur untuk mengupdate data
	public void update(Mahasiswa temp){
		int x = nimlist.indexOf(temp.get_nim()); //cari apakah ada data dengan nim sesuai masukan?
		if(x == -1){ //jika tidak ada
			System.out.println("Sorry we couldn't find ID/NIM, please make sure you type it right");
		}
		else{ //jika ada

			//maka update isi dari list mahasiswa (nim tidak diupdate karena primary key)
			mhslist.get(x).set_nama(temp.get_nama());
			mhslist.get(x).set_gender(temp.get_gender());
			mhslist.get(x).set_fakultas(temp.get_fakultas());
			mhslist.get(x).set_prodi(temp.get_prodi());

			System.out.println("Your data has been succesfully updated!");
		}
	}

	//prosedur untuk menampilkan data
	public void show(){
		if(mhslist.size() == 0){ //jika listnya kosong
			System.out.println("There is no data, please add data first");
		}
		else{ //jika tidak
			System.out.println("List of Student :");
			for(int i = 0; i<mhslist.size(); i++){
				System.out.println((i+1) + "." + mhslist.get(i).get_nim() + " | " 
					+ mhslist.get(i).get_nama() + " | " + mhslist.get(i).get_gender()
					+ " | " + mhslist.get(i).get_fakultas() + " | " + mhslist.get(i).get_prodi());
			}
		}
	}
}