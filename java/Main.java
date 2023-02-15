import java.util.Scanner;
import java.util.ArrayList;

public class Main{

	public static void main(String[] args){

		Mahasiswa temp = new Mahasiswa(); //membuat objek mahasiswa
		Crud ex = new Crud(); //membuat objek crud

		//untuk tampungan masukan
		String nim, nama, gender, prodi, fakultas;
		String command;

		//scanner agar dapat meminta masukan
		Scanner sc = new Scanner(System.in);


		do{
			System.out.println("Please insert your command (add/update/delete/show/exit) : ");

			//minta masukan perintah
			command = sc.next();

			temp = new Mahasiswa();

			if(command.equals("add")){ //jika masukan perintahnya adalah add

				//minta masukan value untuk atribut
				System.out.println("Student ID/NIM : ");
				nim = sc.next();
				System.out.println("Name : ");
				nama = sc.next();
				System.out.println("Gender : ");
				gender = sc.next();
				System.out.println("Faculty : ");
				fakultas = sc.next();
				System.out.println("Degree : ");
				prodi = sc.next();

				//set valuenya ke atribut
				temp.set_nim(nim);
				temp.set_nama(nama);
				temp.set_gender(gender);
				temp.set_fakultas(fakultas);
				temp.set_prodi(prodi);

				ex.add(temp); //panggil prosedur add untuk menambahkan data ke list
			}
			else if(command.equals("delete")){ //jika delete
				System.out.println("Please Insert the Student ID/NIM of the student you want to delete :");
				nim = sc.next(); //minta masukan nim yang ingin dihapus
				temp.set_nim(nim); //set nimnya

				ex.del(temp); //panggil prosedur untuk menghapus data
			}
			else if(command.equals("update")){ //jika update
				System.out.println("Please Insert the Student ID/NIM of the student you want to update :");
				nim = sc.next(); //minta nim yang ingin diupdate

				//kemudian minta masukan untuk atribut barunya
				System.out.println("Name : ");
				nama = sc.next();
				System.out.println("Gender : ");
				gender = sc.next();
				System.out.println("Faculty : ");
				fakultas = sc.next();
				System.out.println("Degree : ");
				prodi = sc.next();

				//set value ke atribut
				temp.set_nim(nim);
				temp.set_nama(nama);
				temp.set_gender(gender);
				temp.set_fakultas(fakultas);
				temp.set_prodi(prodi);

				ex.update(temp); //panggil prosedur untuk mengupdate
			}
			else if(command.equals("show")){ //jika show
				ex.show(); //panggi prosedur untuk menampilkan data pada list
			}
			else if(command.equals("exit")){ //jika exit
				System.out.println("Thank you for using this program :D");
			}
			else{ //jika bukan dari ke 5 command diatas
				System.out.println("Please type a correct command!");
			}

		}while(!command.equals("exit")); //perulangan selama perintahnya bukan exit

		sc.close();
	}
}