#include <stdio.h>

int main() {
	int valor, maior=0;

	printf("Digite os valores desejados: ");
	scanf("%d", &valor);
	while (valor>0)
    {
		if ((valor!=0) && (valor>maior))
			maior=valor;
		scanf("%d", &valor);
	}
	if (maior>0)
		printf("O maior valor digitado eh: %d", maior);

	return 0;
}
