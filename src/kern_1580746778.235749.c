#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	 int B[16][16] = {0};
	 int A[512] = {0};
    clock_t start = clock();

	for (int c = 0; c < 12; c++)
	  for (int b = 3; b < 15; b++)
	    for (int a = 3; a < 15; a++)
	    {
	      
	      A[a]=A[a-3]*B[a][b];
	      
	      B[a][b]=B[a+1][b+4]-10;
	      
	      A[a]=11;
	      
	      int var_a=A[a]+40;
	      int var_b=A[a+4]+2;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
    return 0; 
    }