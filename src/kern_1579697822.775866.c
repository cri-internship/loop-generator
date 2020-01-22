#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(730, 730, "zeros");
	int **B = create_two_dim_int(440, 280, "zeros");

	for (int d = 0; d < 278; d++)
	  for (int c = 0; c < 438; c++)
	    for (int b = 0; b < 438; b++)
	      for (int a = 0; a < 438; a++)
	      {
	        
	       A[a][b]=A[a+1][b+3]-18;
	        
	       B[a][b]=B[a][b+2]+A[a][b];
	        
	       int var_a=B[a][b]*14;
	       int var_b=B[a+2][b]*20;
	      }

    return 0;
}