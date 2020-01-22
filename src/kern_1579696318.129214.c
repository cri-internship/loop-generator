#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(710, 450, "zeros");
	float **C = create_two_dim_float(910, 200, "zeros");
	float *B = create_one_dim_float(990, "zeros");

	for (int d = 0; d < 199; d++)
	  for (int c = 2; c < 706; c++)
	    for (int b = 2; b < 706; b++)
	      for (int a = 2; a < 706; a++)
	      {
	        
	       B[a]=0.184;
	       float  var_a=B[a]+0.832;
	        
	       B[a]=B[a-2]-C[a][b]+A[a][b];
	        
	       C[a][b]=C[a+1][b+1]+B[a]*B[a];
	        
	       A[a][b]=A[a+4][b+2]-C[a][b]/B[a];
	        
	       B[a]=B[a+3]/0.072;
	        
	       C[a][b]=0.566;
	      }

    return 0;
}