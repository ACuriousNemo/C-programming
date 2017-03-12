# include <stdio.h>

int c = 0;
int coin (int c);
float n;

int main (void) {
 
 	do {
 	printf ("Change Owed:");
  	float n = get_float();
 	}
 	while ( n > 0.0);
  
 	
}

int coin (int c) { 
	do {
	while (float n >= 0.0) {
	if ( float n >= .25) {
		int c+= 1, float n-= .25 
	}
}
	while (float n >= 0.0) {
	if (float n >= .10) {
		int c+= 1, float n-= .10 
	}
}
	while (float n >= 0.0) {
		if (float n >= .05) {
			int c+= 1, cloat n-= .05 
		}
	}
	while (float n >= 0.0) {
		if (float n >= .01) {
			int c+= 1, cloat n-= .01
		}
	}
} 
while ( float n > 0.0);
}