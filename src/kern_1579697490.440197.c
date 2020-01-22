#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(210, 70, "zeros");
	float **B = create_two_dim_float(510, 240, "zeros");
	float *C = create_one_dim_float(300, "zeros");
	float **D = create_two_dim_float(340, 420, "zeros");

	for (int d = 5; d < 240; d++)
	  for (int c = 5; c < 297; c++)
	    for (int b = 5; b < 297; b++)
	      for (int a = 5; a < 297; a++)
	      {
	        
	       C[a]=C[a+1]-A[a][b];
	        
	       B[a][b]=D[a][b];
	       B[a-1][b-5]=C[a]+C[a];
	        
	       B[a][b]=D[a][b]+A[a][b]*C[a];
	        
	       float var_a=C[a]*0.067;
	       float var_b=C[a+3]+0.645;
	        
	       float var_c=C[a]-0.326;
	      }

    return 0;
}