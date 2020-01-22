#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(720, "zeros");
	double ***B = create_three_dim_double(600, 620, 680, "zeros");
	double *A = create_one_dim_double(240, "zeros");
	double **C = create_two_dim_double(240, 650, "zeros");
	double *D = create_one_dim_double(570, "zeros");

	for (int d = 2; d < 235; d++)
	  for (int c = 2; c < 235; c++)
	    for (int b = 2; b < 235; b++)
	      for (int a = 2; a < 235; a++)
	      {
	        
	       double var_a=D[a]*0.049;
	       double var_b=D[a-2]+0.207;
	        
	       double var_c=A[a]*0.862;
	       double var_d=A[a+5]/0.547;
	      }

    return 0;
}