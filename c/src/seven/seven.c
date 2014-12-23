#include <u.h>
#include <libc.h>
#include <mp.h>

#define PRIME 10001
#define LIM 1000000
void
main() {
	/* create a prime list, populate the first three */
	int *primes;
	primes = (int*)calloc(PRIME, sizeof(int));
	primes[0] = 2;
	primes[1] = 3;
	primes[2] = 5;
	int p, c, x;
	p = 2;
	c = (primes[p] + 1);
	for(;c<LIM && p != PRIME;c++){
		//print("c:\t%d\n", c);
		//print("p:\t%d\n", p);
		for(x = 0;x <= p;x++) {
			//print("x:\t%d\n", x);
			//print("prime:\t%d\n", primes[x]);
			if(x == p){
				primes[p++] = c;
				//print("%d\t%d\n", p, c);
			}
			if(c%primes[x] == 0)
				break;
		}
	}
	print("%d\n", primes[PRIME - 1]);
	free(primes);
	exits(0);
}
