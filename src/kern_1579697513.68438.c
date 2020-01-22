#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(270, "ones");
	double **C = create_two_dim_double(10, 740, "ones");
	double **B = create_two_dim_double(290, 380, "ones");

	for (int d = 0; d < 739; d++)
	  for (int c = 3; c < 9; c++)
	    for (int b = 3; b < 9; b++)
	      for (int a = 3; a < 9; a++)
	      {
	        
	       A[a]=A[a+1]+0.743;
	        
	       double var_a=C[a][b]/0.768;
	       double var_b=C[a-3][b]*0.182;
	        
	       double var_c=C[a][b]-0.23;
	       double var_d=C[a+1][b+1]/0.518;
	        
	       double var_e=A[a]/0.657;
	       double var_f=A[a+2]-0.823;
	      }

    return 0;
}