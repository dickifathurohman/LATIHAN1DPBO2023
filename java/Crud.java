import java.util.ArrayList;

public class Crud {
	private ArrayList<Mahasiswa> mhslist;
	private ArrayList<String> nimlist;

	Crud() {
		mhslist = new ArrayList<Mahasiswa>();
		nimlist = new ArrayList<String>();
	}

	public void add(Mahasiswa temp){
		int x = nimlist.indexOf(temp.get_nim());
		if(x == -1){
			this.nimlist.add(temp.get_nim());
			this.mhslist.add(temp);

			System.out.println("Your data has been succesfully added!");
		}
		else{
			System.out.println("Student ID/NIM is already used, please use another ID/NIM");
		}
	}

	public void del(Mahasiswa temp){
		int x = nimlist.indexOf(temp.get_nim());
		if(x == -1){
			System.out.println("Sorry we couldn't find ID/NIM, please make sure you type it right");
		}
		else{
			nimlist.remove(x);
			mhslist.remove(x);

			System.out.println("Your data has been succesfully deleted!");
		}
	}

	public void update(Mahasiswa temp){
		int x = nimlist.indexOf(temp.get_nim());
		if(x == -1){
			System.out.println("Sorry we couldn't find ID/NIM, please make sure you type it right");
		}
		else{
			mhslist.get(x).set_nama(temp.get_nama());
			mhslist.get(x).set_gender(temp.get_gender());
			mhslist.get(x).set_fakultas(temp.get_fakultas());
			mhslist.get(x).set_prodi(temp.get_prodi());

			System.out.println("Your data has been succesfully updated!");
		}
	}

	public void show(){
		if(mhslist.size() == 0){
			System.out.println("There is no data, please add data first");
		}
		else{
			System.out.println("List of Student :");
			for(int i = 0; i<mhslist.size(); i++){
				System.out.println((i+1) + "." + mhslist.get(i).get_nim() + " | " 
					+ mhslist.get(i).get_nama() + " | " + mhslist.get(i).get_gender()
					+ " | " + mhslist.get(i).get_fakultas() + " | " + mhslist.get(i).get_prodi());
			}
		}
	}
}