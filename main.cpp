#include <stdio.h>

int fatorial(int n);

int main(){
	printf("Fatorial(5) = %i\n",fatorial(5));
	return 0;
}

int fatorial(int n){ return n == 0 ? 1 : n--*fatorial(n); }
