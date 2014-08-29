#include <u.h>
#include <libc.h>

void
main() {
	int i, j, x, l, e, max;
	/* 3 digit numbers, so max len is 6, plus \0 */
	char s[7], r[7];
	max = 0;
	for(i=999;i>99;i--){
		for(j=100;j<1000;j++){
			x = i*j;
			snprint(s, 7, "%d", x);
			e = strlen(s);
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
