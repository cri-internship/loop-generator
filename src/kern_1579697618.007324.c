#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(500, 380, 940, "zeros");
	float **B = create_two_dim_float(190, 70, "zeros");

	for (int b = 0; b < 376; b++)
	  for (int a = 4; a < 498; a++)
	  {
	    
	     A[a][b][a]=A[a][b+4][a+2]*B[a][b];
	    
	     A[a][b][a]=A[a+2][b+3][a+1]*B[a][b];
	    
	     A[a][b][a]=A[a+2][b][a]-0.745;
	    
	     float var_a=A[a][b][a]-0.317;
	     float var_b=A[a-2][b][a-4]-0.423;
	  }

    return 0;
}