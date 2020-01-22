#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(230, 800, 490, "random");
	double *C = create_one_dim_double(540, "random");
	double **A = create_two_dim_double(860, 830, "random");
	double ***E = create_three_dim_double(810, 90, 850, "random");
	double **D = create_two_dim_double(10, 810, "random");

	for (int d = 0; d < 490; d++)
	  for (int c = 0; c < 795; c++)
	    for (int b = 0; b < 6; b++)
	      for (int a = 0; a < 6; a++)
	      {
	        
	       D[a][b]=C[a]+E[a][b][c];
	       D[a+4][b+1]=0.791/A[a][b];
	        
	       double var_a=B[a][b][c]+0.577;
	       double var_b=B[a+2][b+5][c]-0.408;
	      }

    return 0;
}