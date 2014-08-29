#include <u.h>
#include <libc.h>

#define NUM 600851475143

void
main() {
	u64int n, lf, f;
	n = NUM;
	if(n%2 == 0){
		lf = 2;
		n = n/2;
		while(n%2 == 0)
			n = n/2;
	}else{
		lf = 3;
	}
	f = 3;
	double max = sqrt((double) n); 
	while(n>1 && (double)f<=max) {
		if(n%f == 0){
			n = n/f;
			lf = f;
			while(n%f == 0)
				n = n/f;
			max = sqrt((double) n);
		}
		f += 2;
	}
	if(n == 1)
		print("%d\n", lf);
	else
		print("%d\n", n);
	exits(0);
}
