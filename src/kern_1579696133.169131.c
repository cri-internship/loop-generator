#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(650, 200, "ones");
	double *A = create_one_dim_double(650, "ones");

	for (int d = 3; d < 646; d++)
	  for (int c = 3; c < 646; c++)
	    for (int b = 3; b < 646; b++)
	      for (int a = 3; a < 646; a++)
	      {
	        
	       A[a]=A[a-2]-0.695;
	        
	       A[a]=0.684;
	        
	       double var_a=A[a]*0.544;
	       double var_b=A[a-1]*0.602;
	        
	       A[a]=A[a]+B[a][b];
	        
	       B[a][b]=A[a]-B[a][b];
	       B[a][b]=A[a+4]+B[a][b];
	      }

    return 0;
}