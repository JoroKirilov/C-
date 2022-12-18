/* Задача 6. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ” */

#include <stdio.h>


#define TRACE(format , ...)  printf("TRACE" " " format, __VA_ARGS__)

int main()
{
	TRACE("%s" , "hello");

	return 0;
}
