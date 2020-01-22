#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(60, "zeros");
	double *B = create_one_dim_double(20, "zeros");
	double *C = create_one_dim_double(680, "zeros");
	double **A = create_two_dim_double(910, 640, "zeros");

	for (int d = 0; d < 640; d++)
	  for (int c = 4; c < 20; c++)
	    for (int b = 4; b < 20; b++)
	      for (int a = 4; a < 20; a++)
	      {
	        
	       C[a]=0.445;
	       float  var_a=C[a]+0.284;
	        
	       A[a][b]=A[a-1][b]/C[a]-D[a]+B[a];
	        
	       B[a]=0.245;
	       B[a]=0.574;
	        
	       C[a]=A[a][b]/D[a]+0.65;
	        
	       double var_b=D[a]*0.544;
	       double var_c=D[a-2]+0.077;
	      }

    return 0;
}