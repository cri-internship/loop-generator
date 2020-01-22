#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(150, "ones");
	int ***A = create_three_dim_int(640, 110, 900, "ones");
	int **B = create_two_dim_int(810, 640, "ones");
	int *D = create_one_dim_int(1000, "ones");

	for (int d = 4; d < 150; d++)
	  for (int c = 4; c < 150; c++)
	    for (int b = 4; b < 150; b++)
	      for (int a = 4; a < 150; a++)
	      {
	        
	       D[a]=D[a+5]+A[a][b][c];
	        
	       D[a]=C[a]*B[a][b]/D[a];
	       C[a]=14/B[a][b];
	        
	       int var_a=C[a]-11;
	       int var_b=C[a-4]/27;
	      }

    return 0;
}