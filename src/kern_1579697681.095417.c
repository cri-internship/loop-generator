#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(360, 180, "zeros");
	float **A = create_two_dim_float(590, 760, "zeros");

	for (int d = 5; d < 175; d++)
	  for (int c = 5; c < 358; c++)
	    for (int b = 5; b < 358; b++)
	      for (int a = 5; a < 358; a++)
	      {
	        
	       A[a][b]=A[a-5][b-1]+0.733;
	        
	       B[a][b]=B[a][b-4]*0.671;
	        
	       A[a][b]=A[a+3][b+1]-0.183;
	        
	       B[a][b]=0.122;
	        
	       A[a][b]=B[a][b]/A[a][b];
	       B[a][b]=B[a][b-5]*A[a][b];
	        
	       float var_a=B[a][b]/0.303;
	       float var_b=B[a+2][b+5]*0.334;
	      }

    return 0;
}