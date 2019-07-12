#ifndef __STRING_UTILS_H__
#define __STRING_UTILS_H__

#if defined(__cplusplus) && __cplusplus
extern "C" {
#endif

	unsigned short* gbkToUnicode(const char* gbk, int len = 0);
	char* 			gbkToUtf8(const char* gbk, int len = 0);

	char* 			unicodeToGbk(const unsigned short* unicode, int len = 0);
	char* 			unicodeToUtf8(const unsigned short* unicode, int len = 0);

	unsigned short* utf8ToUnicode(const char* utf8, int len = 0);
	char* 			utf8ToGbk(const char* utf8, int len = 0);


#if defined(__cplusplus) && __cplusplus
}
#endif



#endif
