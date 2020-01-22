#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(710, 120, 820, "zeros");
	float **A = create_two_dim_float(920, 710, "zeros");
	float *C = create_one_dim_float(990, "zeros");
	float *B = create_one_dim_float(610, "zeros");

	for (int d = 1; d < 710; d++)
	  for (int c = 5; c < 610; c++)
	    for (int b = 5; b < 610; b++)
	      for (int a = 5; a < 610; a++)
	      {
	        
	       C[a]=0.984;
	       float  var_a=C[a]-0.416;
	        
	       B[a]=B[a-1]/0.887;
	        
	       B[a]=0.533;
	        
	       C[a]=0.115;
	        
	       C[a]=A[a][b]+B[a]/D[a][b][c]*C[a];
	       A[a][b]=A[a-3][b-1]*B[a]/C[a];
	      }

    return 0;
}