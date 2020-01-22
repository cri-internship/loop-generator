#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(770, 810, 110, "ones");
	double *B = create_one_dim_double(140, "ones");
	double *D = create_one_dim_double(890, "ones");
	double *A = create_one_dim_double(950, "ones");

	for (int d = 0; d < 108; d++)
	  for (int c = 0; c < 805; c++)
	    for (int b = 4; b < 136; b++)
	      for (int a = 4; a < 136; a++)
	      {
	        
	       D[a]=D[a-4]-B[a];
	        
	       D[a]=D[a+1]+A[a]*C[a][b][c];
	        
	       C[a][b][c]=C[a+4][b+5][c+2]/D[a]*D[a]-A[a];
	        
	       A[a]=B[a];
	       A[a+4]=B[a]+D[a]*C[a][b][c];
	        
	       double var_a=B[a]*0.216;
	       double var_b=B[a+4]*0.518;
	      }

    return 0;
}