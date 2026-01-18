#include <stdio.h>
int main(){
	char letra;
	
	scanf("c", &letra);
	
	char resultado = 'a' + (letra - 'a' + 4) % 26;
	
	printf("%c\n", resultado);
	
	return 0;
}

