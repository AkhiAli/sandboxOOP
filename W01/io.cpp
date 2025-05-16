#define _CRT_SECURE_NO_WARNINGS



#include <iostream>
#include <iomanip>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include "io.h"

namespace seneca {


	void read(char* name) {
		std::cout << "name>\n";
		std::cin >> name;
	}


	void print(long long phoneNum) {
		std::cout << '(' << (phoneNum / 10000000) << ") ";
		std::cout << ((phoneNum / 10000) % 1000) << '-';
		std::cout << (phoneNum % 10000);
	}


	void print(const PhoneRec& rec, size_t& row, const char* filter) {
		if (filter == nullptr || strstr(rec.m_firstName, filter) || strstr(rec.m_lastName, filter)) {
			std::cout << row << ". " << rec.m_firstName << " " << rec.m_lastName << " ";
			print(rec.m_phoneNumber);
			std::cout << std::endl;
			row++;
		}
	}


	bool read(PhoneRec& rec, FILE* fileptr) {
		bool flag = false;
		if (fscanf(fileptr,"%s %s %lld",rec.m_firstName, rec.m_lastName, &rec.m_phoneNumber) == 3) {
			flag = true;
		}
		else {
			flag = false;
		}
		return flag;
	}


	void print(PhoneRec* recs[], size_t size, const char* filter) {
		size_t row = 1;
		int i = 0;
		for (i = 0; i < size; i++) {
			print(*recs[i], row, filter);
		}
	}


	void setPointers(PhoneRec* recptr[], PhoneRec recs[], size_t size) {
		int i = 0;
		for (i = 0; i < size; i++) {
			recptr[i] = &recs[i];
		}
	}


	void sort(PhoneRec* recptr[], size_t size, bool sortByLast) {
		if (sortByLast == true) {
			std::sort(recptr, recptr + size, [](PhoneRec* a, PhoneRec* b) {
				return strcmp(a->m_lastName, b->m_lastName) < 0;
				});
		}
		else {
			std::sort(recptr, recptr + size, [](PhoneRec* a, PhoneRec* b) {
				return strcmp(a->m_firstName, b->m_firstName) < 0;
				});
		}
	}
}