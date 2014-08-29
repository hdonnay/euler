#include <u.h>
#include <libc.h>

void
main() {
	int i, c;
	c = 0;
	for(i=1;i<1000;i++)
		if(i%3 == 0 || i%5 == 0)
			c += i;
	print("%d\n", c);
	exits(0);
};
