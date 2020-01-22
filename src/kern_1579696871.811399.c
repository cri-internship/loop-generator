#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(710, "ones");
	int **C = create_two_dim_int(80, 380, "ones");
	int **D = create_two_dim_int(50, 710, "ones");
	int **A = create_two_dim_int(430, 630, "ones");

	for (int d = 0; d < 376; d++)
	  for (int c = 0; c < 46; c++)
	    for (int b = 0; b < 46; b++)
	      for (int a = 0; a < 46; a++)
	      {
	        
	       int var_a=C[a][b]+27;
	       int var_b=C[a+4][b+4]*40;
	        
	       D[a][b]=D[a][b]+A[a][b];
	       B[a]=D[a+4][b+3]*B[a]/C[a][b]+C[a][b];
	      }

    return 0;
}