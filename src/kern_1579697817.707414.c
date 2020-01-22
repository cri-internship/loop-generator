#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(30, 30, "zeros");
	double **A = create_two_dim_double(920, 530, "zeros");
	double **C = create_two_dim_double(130, 130, "zeros");
	double *D = create_one_dim_double(700, "zeros");

	for (int d = 3; d < 30; d++)
	  for (int c = 5; c < 30; c++)
	    for (int b = 5; b < 30; b++)
	      for (int a = 5; a < 30; a++)
	      {
	        
	       B[a][b]=B[a][b-1]/C[a][b]*D[a];
	        
	       A[a][b]=A[a-4][b-3]/0.052;
	        
	       B[a][b]=B[a-5][b-1]-0.387;
	        
	       double var_a=B[a][b]-0.905;
	       double var_b=B[a-4][b-1]/0.801;
	        
	       double var_c=B[a][b]/0.285;
	       double var_d=B[a-1][b-2]-0.481;
	      }

    return 0;
}