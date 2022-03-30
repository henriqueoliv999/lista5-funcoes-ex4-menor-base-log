#include <stdio.h>

int menor_base_log(int n);

int main(void){
  int n;
	printf("\nDigite o valor de n: ");
	scanf("%d", &n);
	menor_base_log(n);
}

int menor_base_log(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			int base = i;
			//printf("%d\t", i);
			//printf("%d\t", base);
			//printf("%d\t\n", n);
			while(base<n){
				//printf("%d\t", base);
				base *= i;
			}
			if(base==n){
				return printf("\nA menor base para este número é: %d", i);
			}
		}
	}
	return printf("\nNão há bases para: %d", n);
}