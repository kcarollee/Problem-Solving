#include <stdio.h>
#include <stdlib.h>

struct balloon
{
	int number;
	int status = 0; //0 indicates unpopped, 1 indicates popped.
};

struct balloon build(int m)
{
	struct balloon temp;
	temp.number = m;
	return temp;
}

int main()
{
	int n, m, x, popped = 0, move;
	struct balloon *all;
	scanf("%d", &n)
	all = malloc(n * sizeof(struct balloon));
	for (m = 0; m < n; m++){
		scanf("%d", &x);
		*(all + m) = build(x);
	}
	move = (all) -> number;
	(all) -> status = 1;
	popped += 1;
	while (popped != n){
		
	}
}