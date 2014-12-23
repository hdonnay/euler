#include <u.h>
#include <libc.h>
#include <mp.h>

void
main() {
	int i, c;
	mpint *w, *x, *exp, *z;
	c = 0;
	z = mpnew(0);
	x = mpnew(0);
	w = mpnew(0);
	exp = mpnew(0);
	itomp(2, exp);
	for(i=1;i<=100;i++){
		c += i;
		itomp(i, z);
		/* (1**2)+(2**2)+... */
		mpexp(z, exp, nil, w);
		mpadd(x, w, x);
	}

	/* (1+2+...+100)**2 */
	mpexp(itomp(c, nil), exp, nil, z);
	mpsub(z, x, w);
	print("%lld - %lld = %lld\n", mptouv(z), mptouv(x), mptouv(w));

	mpfree(x);
	mpfree(z);
	mpfree(w);
	mpfree(exp);
	exits(0);
}
