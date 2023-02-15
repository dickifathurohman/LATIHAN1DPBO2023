from Mahasiswa import Mahasiswa
from Crud import Crud

ex = Crud()

print("Please insert your order (add/update/delete/show/exit) : ")

order = str(input())

while(order != "exit"):

	temp = Mahasiswa()

	if(order == "add"):

		print("NIM :")
		nim = str(input())
		print("Name :")
		nama = str(input())
		print("Gender :")
		gender = str(input())
		print("Faculty")
		fakultas = str(input())
		print("Degree :")
		prodi = str(input())

		temp.set_nim(nim)
		temp.set_nama(nama)
		temp.set_gender(gender)
		temp.set_fakultas(fakultas)
		temp.set_prodi(prodi)

		ex.add(temp)

	elif(order == "delete"):
		print("Please Insert the Student ID/NIM of the student you want to delete :")
		nim = str(input())
		temp.set_nim(nim)

		ex.delete(temp)

	elif(order == "update"):
		print("Please Insert the Student ID/NIM of the student you want to update :")
		nim = str(input())

		print("Name :")
		nama = str(input())
		print("Gender :")
		gender = str(input())
		print("Faculty :")
		fakultas = str(input())
		print("Degree :")
		prodi = str(input())

		temp.set_nim(nim)
		temp.set_nama(nama)
		temp.set_gender(gender)
		temp.set_fakultas(fakultas)
		temp.set_prodi(prodi)

		ex.update(temp)

	elif(order == "show"):
		ex.show()

	order = str(input())


