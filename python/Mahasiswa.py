#deklarasi kelas Mahasiswa
class Mahasiswa:

	#atribut untuk mahasiswa
	__nim = ""
	__nama = ""
	__gender = ""
	__prodi = ""
	__fakultas = ""

	#constructor
	def __init__(self, nim = "", nama = "", gender = "", prodi = "", fakultas = ""):
		self.__nim = nim
		self.__nama = nama
		self.__gender = gender
		self.__prodi = prodi
		self.__fakultas = fakultas

	#setter untuk mengset value pada atribut

	def set_nim(self, nim):
		self.__nim = nim;

	def set_nama(self, nama):
		self.__nama = nama;

	def set_gender(self, gender):
		self.__gender = gender;

	def set_prodi(self, prodi):
		self.__prodi = prodi;

	def set_fakultas(self, fakultas):
		self.__fakultas = fakultas;

	#getter untuk mengambil value dari atribut

	def get_nim(self):
		return self.__nim
	
	def get_nama(self):
		return self.__nama
	
	def get_gender(self):
		return self.__gender
	
	def get_prodi(self):
		return self.__prodi
	
	def get_fakultas(self):
		return self.__fakultas
	