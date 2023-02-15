<?php

#deklarasi kelas Mahasiswa
class Mahasiswa {


	#deklarasi atribut untuk kelas Mahasiswa
	private $nim = '';
	private $nama = '';
	private $gender = '';
	private $fakultas = '';
	private $prodi = '';

	#constructor dengan parameter atribut
	public function __construct($nim = '', $nama = '', $gender = '', $fakultas = '', $prodi = ''){
		$this->nim = $nim;
		$this->nama = $nama;
		$this->gender = $gender;
		$this->fakultas = $fakultas;
		$this->prodi = $prodi;
	}

	#setter untuk mengset value pada tiap atributnya

	public function set_nim($nim){
		$this->nim = $nim;
	}

	public function set_name($name){
		$this->name = $name;
	}

	public function set_gender($gender){
		$this->gender = $gender;
	}

	public function set_fakultas($fakultas){
		$this->fakultas = $fakultas;
	}

	public function set_prodi($prodi){
		$this->prodi = $prodi;
	}

	#getter untuk mengambil value dari tiap atribut
	public function get_nim(){
		return $this->nim;
	}

	public function get_nama(){
		return $this->nama;
	}

	public function get_gender(){
		return $this->gender;
	}

	public function get_fakultas(){
		return $this->fakultas;
	}

	public function get_prodi(){
		return $this->prodi;
	}

}

?>