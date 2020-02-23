#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
int main(const int argc, const char *argv[]) {
	int max = atoi(argv[1]);
	int sqrt_max = ((int) sqrtf(max)) + 1;
	uint8_t *isComposite = calloc(max, sizeof(uint8_t));
	// Loop up to sqrt_max.
	for (int i = 2; i < sqrt_max; i++)
		if (!isComposite[i]) {
			// Prints the number if prime.
			printf("%i\n", i);
			// Sets the multiples of that number composite.
			for (int j = i + i; j < max; j += i)
				isComposite[j] = 1;
		}
	// Print the rest of the primes.
	for (int i = sqrt_max; i < max; i++)
		if (!isComposite[i])
			printf("%i\n", i);
}
