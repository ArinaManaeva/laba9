#include "Header.h"
#include <stdio.h>

unsigned int len(unsigned int  n) {
	int per = 0;
	int p = 1;
	do {
		if (n & !p) {
			per++;
			p = n;
		}
	} while (n >>= 1);

	return per;
}
		
	
