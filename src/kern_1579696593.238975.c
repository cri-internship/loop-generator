#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(500, "zeros");
	float ***A = create_three_dim_float(830, 540, 300, "zeros");
	float *D = create_one_dim_float(1000, "zeros");
	float **B = create_two_dim_float(620, 1000, "zeros");

	for (int d = 5; d < 295; d++)
	  for (int c = 4; c < 539; c++)
	    for (int b = 4; b < 500; b++)
	      for (int a = 4; a < 500; a++)
	      {
	        
	       C[a]=C[a-3]-0.831;
	        
	       D[a]=D[a-1]/B[a][b];
	        
	       D[a]=0.769;
	        
	       A[a][b][c]=C[a];
	       A[a-4][b-4][c-3]=D[a]/D[a];
	        
	       A[a][b][c]=C[a]/D[a]+0.638;
	      }

    return 0;
}