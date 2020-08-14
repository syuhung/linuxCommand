#include <iostream>
#include <cstring>

using namespace std;

const char *SDS_NOINIT = "SDS_NOINIT";

struct __attribute__ ((__packed__)) sdshdr32 {
	uint32_t len;
	uint32_t alloc;
	unsigned char flags;
	char buf[];
};

#define SDS_HDR_VAR(T,s) struct sdshdr##T *sh = (void*)((s)-(sizeof(struct sdshdr##T)))

typedef char* sds;

sds sdsnewlen(const void *init, size_t initlen)
{
	void *sh;
	sds s;

	int hdrlen = sizeof(sdshdr32);
	unsigned char *fp;

	// zmalloc

	void *ptr = malloc(hdrlen+initlen+1);

	sh = ptr;

	if (sh == nullptr) return nullptr;
	if (init == SDS_NOINIT)
		init = nullptr;
	else if (!init)
		memset(sh, 0, hdrlen+initlen+1);

	s = (char*)sh+hdrlen;
	cout << "s   : " << &s << endl;
	fp = ((unsigned char*)s) - 1;
	//SDS_HDR_VAR(32,s);
	sdshdr32* psh = (sdshdr32*) sh;
	psh->len = initlen;
	psh->alloc = initlen;
	if(initlen && init)
		memcpy(s, init, initlen);
	s[initlen] = '\0';	

	cout << "sh  : " << sh << endl;
	cout << "psh : " << *(&s-hdrlen) << endl;
	cout << "s : " << s << endl;

	return s;
}

sds sdsnew(const char *init) {
	size_t initlen = (init == nullptr) ? 0 : strlen(init);
	return sdsnewlen(init, initlen);
}

int main()
{
	//char str[10] = "abcdefg";
	char ss[] = "china";
	cout << "ss : " << &ss << endl;
	cout << "ss[0] : " << &(ss[0]) << endl;
	char* str = ss;
	cout << "str : " << &str << endl;
	sds pstr = sdsnew(ss);
	return 0;
}
