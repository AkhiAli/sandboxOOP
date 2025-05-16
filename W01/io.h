/* Citation and Sources...
-----------------------------------------------------------
Workshop 01
Module: IO
Filename: Io.h
-----------------------------------------------------------
Author: Abu-ubaidah Ali
Student number: 138137245
Email: aali466@myseneca.ca
Subject: OOP244
-----------------------------------------------------------
Revision History
------- --------- ------------------------------------------
Version Date      Reason
V0.5    2025/05/15  Completed main code
V1.0    2025/05/16  Finishing touches/ prepping for submission
-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my work for function whatever.
-----------------------------------------------------------
*/
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