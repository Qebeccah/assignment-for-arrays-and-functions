//c Arrays-3D
#include<stdio.h>
int main(){
	int i,j,k;
	int marks[2][2][3]={ {{54,64,78},{88,65,45}}, {{45,87,69},{56,98,44}} };
	for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    for(k=0;k<3;k++){
	printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
}
}
}
	return 0;
} 
