#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(630, 10, 350, "random");
	float *A = create_one_dim_float(750, "random");
	float *C = create_one_dim_float(390, "random");

	for (int d = 3; d < 390; d++)
	  for (int c = 3; c < 390; c++)
	    for (int b = 3; b < 390; b++)
	      for (int a = 3; a < 390; a++)
	      {
	        
	       C[a]=C[a-1]-B[a][b][c];
	        
	       A[a]=0.703;
	       float  var_a=A[a]-0.703;
	        
	       float var_b=A[a]+0.633;
	       float var_c=A[a-3]+0.905;
	      }

    return 0;
}