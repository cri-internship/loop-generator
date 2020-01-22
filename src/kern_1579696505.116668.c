#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(370, 230, "zeros");
	float **B = create_two_dim_float(530, 800, "zeros");

	for (int d = 5; d < 230; d++)
	  for (int c = 3; c < 370; c++)
	    for (int b = 3; b < 370; b++)
	      for (int a = 3; a < 370; a++)
	      {
	        
	       B[a][b]=B[a-2][b-2]/A[a][b];
	        
	       B[a][b]=B[a][b-1]*0.074;
	        
	       float var_a=A[a][b]/0.661;
	       float var_b=A[a-3][b-5]+0.07;
	      }

    return 0;
}