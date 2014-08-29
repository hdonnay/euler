#include <u.h>
#include <libc.h>

#define MAX 4000000

void
main() {
	int f[2];
	int a, c, i;
	i = 0;
	a = 2;
	f[0] = 1;
	f[1] = 2;
	c = f[0] + f[1];
	for(;c <= MAX;c = f[0] + f[1]){
		if(c%2 == 0)
			a += c;
		f[i++%2] = c;
	}
	print("%d\n", a);
	exits(0);
}
