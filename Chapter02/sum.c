# include <stdio.h>

int main() {
	int i, sum = 0, n = 100;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
