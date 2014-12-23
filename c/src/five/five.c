#include <u.h>
#include <libc.h>

void
main() {
	int i, j;
	for(i=2;;i+=2){
		for(j=1;j<=20;j++){
			if(i%j != 0)
				break;
			if(j == 20) {
				print("%d\n", i);
				exits(0);
			}
		}
	}
	exits("bad");
}
