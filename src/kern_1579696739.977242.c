#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(180, "random");
	double *B = create_one_dim_double(390, "random");
	double ***A = create_three_dim_double(860, 320, 370, "random");
	double *C = create_one_dim_double(270, "random");

	for (int d = 5; d < 366; d++)
	  for (int c = 5; c < 318; c++)
	    for (int b = 5; b < 177; b++)
	      for (int a = 5; a < 177; a++)
	      {
	        
	       D[a]=D[a+3]*0.178;
	        
	       B[a]=B[a+4]-0.829;
	        
	       A[a][b][c]=0.078;
	       A[a-5][b][c-5]=0.795;
	        
	       A[a][b][c]=B[a]+C[a]*D[a];
	        
	       C[a]=B[a]-A[a][b][c]/D[a];
	       B[a]=B[a+3]-A[a][b][c]+D[a];
	        
	       double var_a=A[a][b][c]/0.274;
	       double var_b=A[a-3][b-1][c-1]/0.327;
	        
	       A[a][b][c]=A[a][b][c]+D[a];
	       D[a]=A[a-2][b-5][c-3]-B[a]+C[a];
	      }

    return 0;
}