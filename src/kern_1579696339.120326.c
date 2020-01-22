#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(30, "random");
	double **D = create_two_dim_double(610, 350, "random");
	double **C = create_two_dim_double(880, 470, "random");
	double *B = create_one_dim_double(790, "random");
	double ***E = create_three_dim_double(610, 50, 780, "random");

	for (int d = 3; d < 350; d++)
	  for (int c = 5; c < 30; c++)
	    for (int b = 5; b < 30; b++)
	      for (int a = 5; a < 30; a++)
	      {
	        
	       D[a][b]=D[a][b-3]*0.201;
	        
	       C[a][b]=0.003;
	       C[a+5][b]=0.145;
	        
	       double var_a=A[a]+0.489;
	       double var_b=A[a]/0.536;
	        
	       A[a]=B[a]*E[a][b][c];
	       C[a][b]=B[a-5]/D[a][b]*0.145+C[a][b]-E[a][b][c];
	      }

    return 0;
}