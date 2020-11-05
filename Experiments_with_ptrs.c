#include <stdio.h>

int workingAlternative() {
	int k, * fptr = 36;
	k = fptr; // Dole sam morao j=*ptr da stavim da bih u j kopirao vrednost na adresi na koju pointer ukazuje. Ovde, posto je *fptr iniciran kao int literal, moram kao int i da ga koristim!
	printf("%d\n", k);
	return;
}

main()
{
	int j, * ptr;
	int b = 35;
	ptr = &b;
	j = *ptr;
	printf("\n%d\n", j);

	workingAlternative(); // ne zaboravi zagrade da stavis, cak i ako nikakve parametre ne saljes. I u definiciji/prototipu, i u pozivu!
}