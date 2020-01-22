#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(680, "ones");
	double *A = create_one_dim_double(560, "ones");
	double **B = create_two_dim_double(270, 450, "ones");
	double *C = create_one_dim_double(660, "ones");
	double **D = create_two_dim_double(150, 920, "ones");

	for (int d = 5; d < 920; d++)
	  for (int c = 5; c < 150; c++)
	    for (int b = 5; b < 150; b++)
	      for (int a = 5; a < 150; a++)
	      {
	        
	       C[a]=C[a-4]*B[a][b]-D[a][b];
	        
	       E[a]=E[a-4]-0.207;
	        
	       A[a]=A[a-4]/0.915;
	        
	       C[a]=0.312;
	        
	       double var_a=D[a][b]*0.794;
	       double var_b=D[a-5][b-5]-0.915;
	      }

    return 0;
}