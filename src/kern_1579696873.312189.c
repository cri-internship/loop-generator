#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(760, "random");
	double **C = create_two_dim_double(290, 870, "random");
	double **B = create_two_dim_double(700, 130, "random");
	double *D = create_one_dim_double(30, "random");
	double ***E = create_three_dim_double(790, 500, 920, "random");

	for (int d = 0; d < 916; d++)
	  for (int c = 0; c < 128; c++)
	    for (int b = 3; b < 28; b++)
	      for (int a = 3; a < 28; a++)
	      {
	        
	       E[a][b][c]=E[a+5][b+5][c+4]-0.656;
	        
	       D[a]=B[a][b];
	       D[a+2]=E[a][b][c]+C[a][b]/A[a];
	        
	       D[a]=C[a][b]/B[a][b]+A[a];
	        
	       E[a][b][c]=A[a]*0.99/E[a][b][c]+C[a][b];
	       A[a]=A[a-3]-D[a]+B[a][b]/C[a][b];
	        
	       double var_a=B[a][b]*0.462;
	       double var_b=B[a+1][b+2]/0.478;
	      }

    return 0;
}