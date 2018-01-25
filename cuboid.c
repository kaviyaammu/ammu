#include <stdio.h>

int main(void) {
	int len,bre,hgt,vol,sura;
	scanf("%d%d%d",&len,&bre,&hgt);
	vol=len*bre*hgt;
	sura=2*(len*bre+bre*hgt+hgt*len);
	printf("The volume of cuboid is %d\n",vol);
	printf("The surface area is %d",sura);
	
	
	return 0;
}
