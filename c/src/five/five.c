#include <u.h>
#include <libc.h>

void
main() {
	int i,j,x;
	x = 0;
	for(i=2;;i+=2,x=0){
		for(j=1;j<=20;j++){
			if(i%j != 0)
				x++;
		}
		if(x == 0) {
			print("%d\n", i);
			exits(0);
		}
	}
	exits("bad");
}
