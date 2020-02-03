#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	 int A[32][32][16] = {0};
	 int C[16][8][16] = {0};
	 int B[16][32][8] = {0};
    clock_t start = clock();

	for (int c = 0; c < 4; c++)
	  for (int b = 0; b < 28; b++)
	    for (int a = 0; a < 13; a++)
	    {
	      
	      B[a][b][c]=B[a+3][b+4][c+4]+27;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
    return 0; 
    }