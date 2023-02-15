#deklarasi kelas Crud
class Crud:

	__mhslist = [] #untuk list mahasiswa
	__nimlist = [] #untuk list nim (menampung primary key)

	#prosedur untuk menampilkan data
	def show(self):
		for i in range(len(self.__mhslist)):
			print(i+1, ".", self.__mhslist[i].get_nim(), " | ", self.__mhslist[i].get_nama(), " | ",
				self.__mhslist[i].get_gender(), " | ", self.__mhslist[i].get_fakultas(), " | ",
				self.__mhslist[i].get_prodi())

	#prosedur untuk menambah data
	def add(self, temp):

		if(temp.get_nim() in self.__nimlist): #jika nim sudah ada pada list
			#maka tampilkan pesan nim sudah digunakan
			print("Student ID/NIM is already used, please use another ID/NIM")
		else: #jika tidak ada pada list

			#tambahkan data ke list
			self.__nimlist.append(temp.get_nim())
			self.__mhslist.append(temp)

			print("Your data has been succesfully added!")


	#prosedur untuk menghapus data
	def delete(self, temp):

		#jika nim ada pada list
		if(temp.get_nim() in self.__nimlist):

			#ambil indexnya menggunakan fungsi index
			x = self.__nimlist.index(temp.get_nim())

			#kemudian hapus menggunakan fungsi pop
			self.__nimlist.pop(x)
			self.__mhslist.pop(x)

			print("Your data has been succesfully deleted!")
		else: #jika tidak ada nim tersebut pada list
			print("We couldn't find your ID/NIM, please make sure you type it right")

	#prosedur untuk mengubah data
	def update(self, temp):
		#jika nim ada pada list
		if(temp.get_nim() in self.__nimlist):

			#ambil index dari data dengan nim tersebut
			x = self.__nimlist.index(temp.get_nim())
			
			#kemudian update data dengan index tersebut
			self.__mhslist[x].set_nama(temp.get_nama())
			self.__mhslist[x].set_gender(temp.get_gender())
			self.__mhslist[x].set_fakultas(temp.get_fakultas())
			self.__mhslist[x].set_prodi(temp.get_prodi())

			print("Your data has been succesfully updated!")
		else:
			print("We couldn't find your ID/NIM, please make sure you type it right")

	