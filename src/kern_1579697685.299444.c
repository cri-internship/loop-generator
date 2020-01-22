#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "ones");
	double *B = create_one_dim_double(480, "ones");
	double **C = create_two_dim_double(680, 50, "ones");
	double *D = create_one_dim_double(680, "ones");

	for (int d = 2; d < 50; d++)
	  for (int c = 4; c < 480; c++)
	    for (int b = 4; b < 480; b++)
	      for (int a = 4; a < 480; a++)
	      {
	        
	       B[a]=B[a-1]/D[a];
	        
	       B[a]=B[a-4]+0.002;
	        
	       A[a]=A[a+1]+0.707;
	        
	       D[a]=C[a][b]*B[a];
	       D[a-2]=0.653/A[a];
	        
	       double var_a=C[a][b]+0.54;
	       double var_b=C[a-4][b-2]/0.334;
	      }

    return 0;
}