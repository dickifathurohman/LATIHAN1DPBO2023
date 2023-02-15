import java.util.Scanner;
import java.util.ArrayList;

public class Main{

	public static void main(String[] args){

		Mahasiswa temp = new Mahasiswa();
		Crud ex = new Crud();

		String nim, nama, gender, prodi, fakultas;
		String order;

		int i = 0;

		Scanner sc = new Scanner(System.in);


		do{
			System.out.println("Please insert your order (add/update/delete/show/exit) : ");

			order = sc.next();

			temp = new Mahasiswa();

			if(order.equals("add")){

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

				temp.set_nim(nim);
				temp.set_nama(nama);
				temp.set_gender(gender);
				temp.set_fakultas(fakultas);
				temp.set_prodi(prodi);

				ex.add(temp);
			}
			else if(order.equals("delete")){
				System.out.println("Please Insert the Student ID/NIM of the student you want to delete :");
				nim = sc.next();
				temp.set_nim(nim);

				ex.del(temp);
			}
			else if(order.equals("update")){
				System.out.println("Please Insert the Student ID/NIM of the student you want to update :");
				nim = sc.next();

				System.out.println("Name : ");
				nama = sc.next();
				System.out.println("Gender : ");
				gender = sc.next();
				System.out.println("Faculty : ");
				fakultas = sc.next();
				System.out.println("Degree : ");
				prodi = sc.next();

				temp.set_nim(nim);
				temp.set_nama(nama);
				temp.set_gender(gender);
				temp.set_fakultas(fakultas);
				temp.set_prodi(prodi);

				ex.update(temp);
			}
			else if(order.equals("show")){
				ex.show();
			}
			else{
				System.out.println("Please type a correct order!");
			}

		}while(!order.equals("exit"));

		sc.close();
	}
}