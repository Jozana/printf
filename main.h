#ifndef PRINTF_M
#define PRINTF_M

#define BUFSIZE 1024
#include <stdarg.h>

/**
 * struct spec_types - Struct to get function of specifier
 * @spec: specifier
 * @f: The function associated
 */

typedef struct spec_types
{
	char *spec;
	char *(*f)();
} s_types;


char *(*get_spec_func(char s))(va_list);
int _printf(const char *format, ...);
int _strlen(char *s);
void _puts(char *buffer, int size);
int alloc_buffer(char *hold, int hlen, char *buffer, int size, double *total);
char *chartos(char c);
char *nothing_found(char c);
char *percent_find(void);
char *int_find(va_list npoint);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);

#endif
