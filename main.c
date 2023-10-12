#include <stdio.h>
#include <stdlib.h>

int factorial(int x) {
	int y=1,i=1;
	if (x==1)
		return 1;
	else{
		for(i=1;i<=x;i++)
		y*=i;
	}
	return y;
}

int sub(int x,int y){
	if(x>y)
		return x-y;
	else
		return y-x;
}
int comb(int n,int r){
	return factorial(n)/(factorial(sub(n,r))*factorial(r));
}
int main(){
	
	int n,r;
	scanf("%d,%d",&n,&r);
	printf("n combination r %d\n",comb(n,r));
    system("PAUSE");   
    return 0;
}
