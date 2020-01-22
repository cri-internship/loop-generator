#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(1000, 1000, 480, "random");
	double *B = create_one_dim_double(670, "random");
	double ***C = create_three_dim_double(590, 980, 350, "random");
	double *A = create_one_dim_double(410, "random");

	for (int d = 5; d < 350; d++)
	  for (int c = 5; c < 980; c++)
	    for (int b = 5; b < 408; b++)
	      for (int a = 5; a < 408; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-5][c-1]/0.513;
	        
	       C[a][b][c]=C[a-4][b-1][c-5]/0.022;
	        
	       A[a]=A[a+2]/0.48;
	        
	       double var_a=B[a]-0.306;
	       double var_b=B[a+2]*0.08;
	        
	       B[a]=A[a]*C[a][b][c];
	       C[a][b][c]=A[a-4]/B[a]-C[a][b][c];
	      }

    return 0;
}