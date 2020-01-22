#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(810, "random");
	double ***A = create_three_dim_double(520, 40, 720, "random");
	double ***D = create_three_dim_double(890, 730, 130, "random");
	double **C = create_two_dim_double(930, 730, "random");

	for (int d = 0; d < 718; d++)
	  for (int c = 0; c < 35; c++)
	    for (int b = 5; b < 516; b++)
	      for (int a = 5; a < 516; a++)
	      {
	        
	       A[a][b][c]=A[a+2][b+5][c]/C[a][b];
	        
	       A[a][b][c]=A[a+4][b+2][c+2]*D[a][b][c];
	        
	       double var_a=B[a]+0.784;
	       double var_b=B[a-5]-0.487;
	      }

    return 0;
}