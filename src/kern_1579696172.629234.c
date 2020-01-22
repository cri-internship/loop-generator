#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(900, "ones");
	double ***C = create_three_dim_double(620, 830, 950, "ones");
	double *D = create_one_dim_double(80, "ones");
	double **A = create_two_dim_double(710, 660, "ones");

	for (int d = 1; d < 950; d++)
	  for (int c = 3; c < 660; c++)
	    for (int b = 5; b < 620; b++)
	      for (int a = 5; a < 620; a++)
	      {
	        
	       A[a][b]=A[a-2][b-1]*B[a]+D[a]/C[a][b][c];
	        
	       A[a][b]=A[a-5][b-3]+B[a];
	        
	       B[a]=B[a+1]/0.975;
	        
	       B[a]=A[a][b];
	        
	       double var_a=B[a]-0.562;
	       double var_b=B[a-2]-0.06;
	        
	       double var_c=C[a][b][c]/0.387;
	       double var_d=C[a][b-3][c]*0.823;
	        
	       C[a][b][c]=C[a][b][c]-D[a];
	       A[a][b]=C[a][b-3][c-1]-B[a];
	      }

    return 0;
}