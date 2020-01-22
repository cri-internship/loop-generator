#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(560, 410, 40, "zeros");
	double **C = create_two_dim_double(630, 740, "zeros");
	double **A = create_two_dim_double(230, 790, "zeros");
	double *D = create_one_dim_double(10, "zeros");

	for (int d = 0; d < 37; d++)
	  for (int c = 2; c < 408; c++)
	    for (int b = 1; b < 229; b++)
	      for (int a = 1; a < 229; a++)
	      {
	        
	       C[a][b]=C[a-1][b-2]/0.436;
	        
	       B[a][b][c]=B[a+3][b+2][c+3]-A[a][b];
	        
	       C[a][b]=0.804;
	        
	       double var_a=A[a][b]+0.34;
	       double var_b=A[a+1][b+3]*0.496;
	      }

    return 0;
}