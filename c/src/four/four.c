#include <u.h>
#include <libc.h>

void
main() {
	int i, j, x, l, e, max;
	//char z;
	char *s, *r;
	max = 0;
	for(i=999;i>99;i--){
		for(j=100;j<1000;j++){
			x = i*j;
			s = smprint("%d", x);
			r = strdup(s);
			e = strlen(s);
			/* make some assumptions about ASCII, look away... */
			for(l=0; l<e; l++){
				r[l] = s[e-l-1];
			}
			//print("%d\t%d\t%s\t%s\n", i, j, s, r);
			if(strcmp(r, s) == 0) {
				if (x < max) {
					print("%d\n", max);
					exits(0);
				} else
					max = x;
			}
		}
	}
	exits(":(");
}
