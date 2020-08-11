#include <iostream>

using namespace std;

struct __attribute__ ((__packed__)) sdshdr8 {
	uint8_t len;
	uint8_t alloc;
	unsigned char flags;
	char buf[];
};

struct __attribute__ ((__packed__)) sdshdr16 {
	uint16_t len;
	uint16_t alloc;
	unsigned char flags;
	char buf[];
};

struct __attribute__ ((__packed__)) sdshdr32 {
	uint32_t len;
	uint32_t alloc;
	unsigned char flags;
	char buf[];
};

struct __attribute__ ((__packed__)) sdshdr64 {
	uint64_t len;
	uint64_t alloc;
	unsigned char flags;
	char buf[];
};

int main()
{
	cout << "size of uint8_t is " << sizeof(uint8_t) << endl;
	cout << "size of uint16_t is " << sizeof(uint16_t) << endl;
	cout << "size of uint32_t is " << sizeof(uint32_t) << endl;
	cout << "size of uint64_t is " << sizeof(uint64_t) << endl;
	cout << "size of sdshdr8 is " << sizeof(sdshdr8) << endl;
	cout << "size of sdshdr16 is " << sizeof(sdshdr16) << endl;
	cout << "size of sdshdr32 is " << sizeof(sdshdr32) << endl;
	cout << "size of sdshdr64 is " << sizeof(sdshdr64) << endl;
	return 0;
}
