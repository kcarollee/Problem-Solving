#include <stdio.h>

int main()
{
	int a, b, c, d, n = 1, r;
	
	scanf("%d %d %d", &a, &b, &c);
	
	d = a * b * c;
	
	int e = d, f = d;
	
	do{e = e / 10;
	   n++;
	}while(e > 0);
	
	int m[10] = {0};
	
	for (int t = 1; t <= n; t++){
		r = d % 10;
		for (int u = 0; u <= 9; u++){	
		
			if(r == u){
				
				m[u]++;
			}
		
		}
		d /= 10;
	}
	
	for (int o = 0; o <= 9; o++){
		if (o == 0){
			printf("%d\n", m[o] - 1);
		}
		else if(o > 0){
		printf("%d\n", m[o]);
		}
	}
	return 0;
}
