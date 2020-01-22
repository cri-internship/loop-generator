#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(270, "zeros");
	double *B = create_one_dim_double(40, "zeros");
	double *D = create_one_dim_double(200, "zeros");
	double ***A = create_three_dim_double(820, 430, 70, "zeros");

	for (int d = 1; d < 200; d++)
	  for (int c = 1; c < 200; c++)
	    for (int b = 1; b < 200; b++)
	      for (int a = 1; a < 200; a++)
	      {
	        
	       D[a]=B[a];
	       D[a-1]=A[a][b][c];
	        
	       double var_a=C[a]*0.124;
	       double var_b=C[a+5]-0.847;
	      }

    return 0;
}