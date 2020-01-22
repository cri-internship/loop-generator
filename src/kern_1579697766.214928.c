#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(980, "random");
	double **A = create_two_dim_double(580, 680, "random");
	double **B = create_two_dim_double(200, 730, "random");
	double **C = create_two_dim_double(700, 170, "random");
	double *D = create_one_dim_double(680, "random");

	for (int d = 0; d < 676; d++)
	  for (int c = 2; c < 198; c++)
	    for (int b = 2; b < 198; b++)
	      for (int a = 2; a < 198; a++)
	      {
	        
	       A[a][b]=A[a+4][b+4]-0.775;
	        
	       B[a][b]=B[a+2][b+4]*C[a][b];
	        
	       E[a]=E[a+1]-0.147;
	        
	       double var_a=B[a][b]-0.337;
	       double var_b=B[a+1][b+4]+0.822;
	        
	       double var_c=E[a]+0.768;
	       double var_d=E[a-2]+0.792;
	      }

    return 0;
}