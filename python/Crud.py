class Crud:

	__mhslist = []
	__nimlist = []

	def show(self):
		for i in range(len(self.__mhslist)):
			print(i+1, ".", self.__mhslist[i].get_nim(), " | ", self.__mhslist[i].get_nama(), " | ",
				self.__mhslist[i].get_gender(), " | ", self.__mhslist[i].get_fakultas(), " | ",
				self.__mhslist[i].get_prodi())

	def add(self, temp):
		if(temp.get_nim() in self.__nimlist):
			print("Student ID/NIM is already used, please use another ID/NIM")
		else:
			self.__nimlist.append(temp.get_nim())
			self.__mhslist.append(temp)

			print("Your data has been succesfully added!")


	def delete(self, temp):
		if(temp.get_nim() in self.__nimlist):
			x = self.__nimlist.index(temp.get_nim())

			self.__nimlist.pop(x)
			self.__mhslist.pop(x)

			print("Your data has been succesfully deleted!")
		else:
			print("We couldn't find your ID/NIM, please make sure you type it right")


	def update(self, temp):
		if(temp.get_nim() in self.__nimlist):
			x = self.__nimlist.index(temp.get_nim())
			
			self.__mhslist[x].set_nama(temp.get_nama())
			self.__mhslist[x].set_gender(temp.get_gender())
			self.__mhslist[x].set_fakultas(temp.get_fakultas())
			self.__mhslist[x].set_prodi(temp.get_prodi())

			print("Your data has been succesfully updated!")
		else:
			print("We couldn't find your ID/NIM, please make sure you type it right")

	