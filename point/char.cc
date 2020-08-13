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
	fp = ((unsigned char*)s) - 1;
	SDS_HDR_VAR(32,s);
	sh->len = initlen;
	sh->alloc = initlen;
	if(initlen && init)
		memcpy(s, init, initlen);
	s[initlen] = '\0';	

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
	char* str = ss;
	char* pstr = sdsnew(str);
	if (pstr)
		cout << "str is : " << *pstr << endl;
	return 0;
}
