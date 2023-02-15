from Mahasiswa import Mahasiswa
from Crud import Crud

ex = Crud() #objek crud

print("Please insert your command (add/update/delete/show/exit) : ")

command = str(input()) #meminta masukan perintah

while(command != "exit"): #selama perintahnya bukan exit

	temp = Mahasiswa() #objek mahasiswa dengan tampungan temp untuk menampung masukan value untuk atribut

	if(command == "add"): #jika perintahnya add

		#minta masukan untuk value tiap atribut
		print("NIM :")
		nim = str(input())
		print("Name :")
		nama = str(input())
		print("Gender :")
		gender = str(input())
		print("Faculty :")
		fakultas = str(input())
		print("Degree :")
		prodi = str(input())

		#set value peratribut
		temp.set_nim(nim)
		temp.set_nama(nama)
		temp.set_gender(gender)
		temp.set_fakultas(fakultas)
		temp.set_prodi(prodi)

		ex.add(temp) #panggil prosedur untuk menambahkan atribut

	elif(command == "delete"): #jika perintahnya delete
		print("Please Insert the Student ID/NIM of the student you want to delete :")
		nim = str(input()) #minta masukan nim untuk dicari data dengan nim yang sama
		temp.set_nim(nim) #set valuenya

		ex.delete(temp) #panggil prosedur delete

	elif(command == "update"): #jika perintahnya update
		print("Please Insert the Student ID/NIM of the student you want to update :")
		nim = str(input()) #minta masukan nim untuk dicari data dengan nim yang sama

		#minta masukan data yang baru
		print("Name :")
		nama = str(input())
		print("Gender :")
		gender = str(input())
		print("Faculty :")
		fakultas = str(input())
		print("Degree :")
		prodi = str(input())

		#set value
		temp.set_nim(nim)
		temp.set_nama(nama)
		temp.set_gender(gender)
		temp.set_fakultas(fakultas)
		temp.set_prodi(prodi)

		ex.update(temp) #panggil prosedur untuk mengupdate data

	elif(command == "show"): #jika perintahnya show
		ex.show() #panggul prosedur untuk menampilkan data

	command = str(input()) #minta masukan untuk perintah lagi


