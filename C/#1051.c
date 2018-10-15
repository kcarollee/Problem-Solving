#include <stdio.h>

int main()
{
	int n, m, box[50][50];
	scanf("%d %d", &n, &m);

	for (int a = 0; a < n; a++){
		int p;
		scanf("%d", &p);
		for (int b = m - 1; b >= 0; b--){
			int r = p % 10;
			box[a][b] = r;
			p /= 10;
			if (p == 0)
				break;
		}
	}
	int squares = 0;
	/* x = length of a square's side */
	/* y = square's vertical position */
	/* z = square's horizontal position */
	
	if (n < m){
		for (int x = 2; x < n; x++){
			for (int y = x - 1; y <= n - 1 ; y++){
				for (int z = x - 1; z <= m - 1; z++){
					if (box[y][z] == box[y-x+1][z] && box[y][z] == box[y-x+1][z-x+1] && box[y][z-x+1]){
						squares++;
					}
			
					else
						continue;
				}
			}
		}
		printf("%d", squares);
	}
	
	else if(n > m){
		for (int x = 2; x < m; x++){
			for (int y = x - 1; y <= m - 1 ; y++){
				for (int z = x - 1; z <= n - 1; z++){
					if (box[y][z] == box[y-x+1][z] && box[y][z] == box[y-x+1][z-x+1] && box[y][z-x+1]){
						squares++;
					}
					else
						continue;
				}
			}
		}
		printf("%d", squares);
		
		
	}
	
	else if(n == m){for (int x = 2; x < n; x++){
			for (int y = x - 1; y <= n - 1 ; y++){
				for (int z = x - 1; z <= m - 1; z++){
					if (box[y][z] == box[y-x+1][z] && box[y][z] == box[y-x+1][z-x+1] && box[y][z-x+1]){
						squares++;
					}
					else
						continue;
				}
			}
		}
		printf("%d", squares);
		
	}
	return 0;
}

