#include <u.h>
#include <libc.h>
#include <mp.h>

void
main() {
	char *s;
	int i;
	mpint *x, *y, *z;
	x = mpnew(0);
	y = mpnew(0);
	z = mpnew(0);
	for(i = 1; i <=	1000; i++){
		itomp(i, x);
		mpexp(x, x, nil, z);
		mpadd(y, z, y);
	}
	s = mptoa(y, 10, nil, 1024);
	print("%s\n", (s + (strlen(s)-10)*sizeof(char)));
	mpfree(x);
	mpfree(y);
	mpfree(z);
	exits(0);
}
