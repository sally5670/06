#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a,int b) {
	int c=a+b;
    return c;
}

int square(int n){
	return n*n;
}
int get_max(int x,int y){
	if(x>y)
		return x;
	else
		return y;
}
int main(void){
	int a=2,b=3,n=4,x=4,y=7;
	printf("sumTwo %d\n",sumTwo(a,b));
	printf("square %d\n",square(n));
	printf("get_max %d\n",get_max(x,y));
    system("PAUSE");   
    return 0;
}
