#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(40, "random");
	float **A = create_two_dim_float(430, 920, "random");
	float *B = create_one_dim_float(600, "random");

	for (int d = 2; d < 917; d++)
	  for (int c = 3; c < 35; c++)
	    for (int b = 3; b < 35; b++)
	      for (int a = 3; a < 35; a++)
	      {
	        
	       A[a][b]=A[a+1][b+3]-0.6;
	        
	       C[a]=A[a][b];
	       C[a+5]=0.524-B[a];
	        
	       A[a][b]=C[a]-C[a];
	      }

    return 0;
}