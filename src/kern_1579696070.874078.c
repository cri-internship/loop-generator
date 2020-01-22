#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(940, "zeros");
	float *D = create_one_dim_float(570, "zeros");
	float **A = create_two_dim_float(570, 220, "zeros");
	float **C = create_two_dim_float(690, 790, "zeros");

	for (int d = 4; d < 786; d++)
	  for (int c = 5; c < 565; c++)
	    for (int b = 5; b < 565; b++)
	      for (int a = 5; a < 565; a++)
	      {
	        
	       B[a]=B[a-2]-D[a];
	        
	       D[a]=D[a-5]*B[a];
	        
	       C[a][b]=B[a]-A[a][b]/A[a][b]+C[a][b];
	        
	       C[a][b]=C[a][b-4]*D[a]/A[a][b]-B[a];
	        
	       float var_a=C[a][b]*0.493;
	       C[a][b]=0.684;
	        
	       D[a]=D[a+5]+0.281;
	        
	       B[a]=C[a][b]-B[a]/A[a][b];
	       D[a]=C[a+3][b+4]-0.627/A[a][b]+D[a];
	      }

    return 0;
}