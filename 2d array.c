//2D array
#include<stdio.h>
int main(){
	int x,y;
	int sweets[4][3]={{4,7,6},{5,9,12},{9,8,3},{10,7,2}};
for(x=0;x<4;x++){
	for(y=0;y<3;y++){
	printf("sweets[%d][%d]=%d\n",x,y,sweets[x][y]);	
	}
}	
return 0;
}
