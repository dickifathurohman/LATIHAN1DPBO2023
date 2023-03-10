//deklarasi class Mahasiswa
public class Mahasiswa{

	//deklarasi atribut yang dimiliki mahasiswa, semuanya bertipe string
	private String nim;
	private String nama;
	private String gender;
	private String prodi;
	private String fakultas;

	//default constructor
	public Mahasiswa(){
		this.nim = "";
		this.nama = "";
		this.gender = "";
		this.prodi = "";
		this.fakultas = "";
	}

	//constructor dengan atribut sebagai parameternya
	public Mahasiswa(String nim, String nama, String gender, String prodi, String fakultas){
		this.nim = nim;
		this.nama = nama;
		this.gender = gender;
		this.prodi = prodi;
		this.fakultas = fakultas;
	}

	//setter untuk mengset value pada atribut

	public void set_nim(String nim){
		this.nim = nim;
	}

	public void set_nama(String nama){
		this.nama = nama;
	}

	public void set_gender(String gender){
		this.gender = gender;
	}

	public void set_prodi(String prodi){
		this.prodi = prodi;
	}

	public void set_fakultas(String fakultas){
		this.fakultas = fakultas;
	}

	//getter untuk mengambil value pada atribut

	public String get_nim(){
		return this.nim;
	}

	public String get_nama(){
		return this.nama;
	}

	public String get_gender(){
		return this.gender;
	}

	public String get_prodi(){
		return this.prodi;
	}

	public String get_fakultas(){
		return this.fakultas;
	}
}

