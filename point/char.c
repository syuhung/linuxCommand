#include <string.h>
#include <stdio.h>
#include <stdint.h>

const char *SDS_NOINIT = "SDS_NOINIT";

typedef char* sds;

struct __attribute__ ((__packed__)) sdshdr32 {
	uint32_t len;
	uint32_t alloc;
	unsigned char flags;
	char buf[];
};

//#define SDS_HDR_VAR(T,s) struct sdshdr##T *sh = (void*)((s)-(sizeof(struct sdshdr##T)));

sds sdsnewlen(const void *init, size_t initlen)
{
	void *sh;
	sds s;

	int hdrlen = sizeof(struct sdshdr32);
	unsigned char *fp;

	// zmalloc

	void *ptr = (void*)malloc(hdrlen+initlen+1);

	sh = ptr;

	if (sh == NULL) return NULL;
	if (init == SDS_NOINIT)
		init = NULL;
	else if (!init)
		memset(sh, 0, hdrlen+initlen+1);

	s = (char*)sh+hdrlen;
	fp = ((unsigned char*)s) - 1;
	//SDS_HDR_VAR(32,s);
	struct sdshdr32* sh = (void*)((s)-(sizeof(struct sdshdr32)));
	sh->len = initlen;
	sh->alloc = initlen;
	if(initlen && init)
		memcpy(s, init, initlen);
	s[initlen] = '\0';	

	return s;
}

sds sdsnew(const char *init) {
	size_t initlen = (init == NULL) ? 0 : strlen(init);
	return sdsnewlen(init, initlen);
}

int main()
{
	//char str[10] = "abcdefg";
	char ss[] = "china";
	char* str = ss;
	char* pstr = sdsnew(str);
	if (pstr)
		printf("pstr is %c", *pstr);
	return 0;
}
