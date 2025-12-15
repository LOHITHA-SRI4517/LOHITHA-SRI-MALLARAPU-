#include<stdio.h>
int biggest();
int main(){
	int res;
	res=biggest();
	printf("Biggest value is :%d",res);
	return 0;
}
int biggest(){					// or int a,b,c;
	int a,b,c,d;				    //printf("enter values");
	printf("ENTER A B C VALUES:");	 // scanf();
	scanf("%d %d %d",&a,&b,&c);		//if (a>b&&a>c) 
	}								//return a;
	if(a>b&&a>c){					//else if(b>c){
		printf("A is biggest");		//return b;
	}								else
	else if(b>c){					//return c;
		printf("B is biggest");
	}
	else{
		printf("C is biggest");
		return d;
	}
}
