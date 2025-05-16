#ifndef SENECA_IO_H
#define SENECA_IO_H

namespace seneca {
	struct PhoneRec
	{
		char m_firstName[15];
		char m_lastName[25];
		long long m_phoneNumber;
	};


	void read(char* name);


	void print(long long phoneNum);


	void print(const PhoneRec& rec, size_t& row, const char* filter = nullptr);


	bool read(PhoneRec& rec, FILE* fileptr);


	void print(PhoneRec* recs[], size_t size, const char* filter = nullptr);


	void setPointers(PhoneRec* recptr[], PhoneRec recs[], size_t size);


	void sort(PhoneRec* recptr[], size_t size, bool sortByLastName);



}
#endif