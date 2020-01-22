#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(100, 90, "ones");
	double ***A = create_three_dim_double(540, 730, 960, "ones");
	double *C = create_one_dim_double(480, "ones");

	for (int d = 5; d < 960; d++)
	  for (int c = 5; c < 90; c++)
	    for (int b = 4; b < 100; b++)
	      for (int a = 4; a < 100; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-3][c-5]*0.897;
	        
	       B[a][b]=B[a][b-5]*C[a]+A[a][b][c];
	        
	       double var_a=C[a]+0.891;
	       C[a]=0.108;
	        
	       A[a][b][c]=0.412;
	        
	       C[a]=0.862;
	        
	       double var_b=A[a][b][c]/0.63;
	       double var_c=A[a][b-3][c-5]+0.077;
	        
	       double var_d=B[a][b]+0.924;
	       double var_e=B[a-3][b-2]/0.146;
	      }

    return 0;
}