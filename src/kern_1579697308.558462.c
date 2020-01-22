#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(800, 190, "ones");
	double **B = create_two_dim_double(620, 800, "ones");
	double *A = create_one_dim_double(280, "ones");

	for (int d = 0; d < 185; d++)
	  for (int c = 0; c < 796; c++)
	    for (int b = 0; b < 796; b++)
	      for (int a = 0; a < 796; a++)
	      {
	        
	       double var_a=C[a][b]+0.059;
	       double var_b=C[a+4][b+5]*0.185;
	        
	       double var_c=C[a][b]/0.449;
	       double var_d=C[a+4][b+3]-0.517;
	        
	       double var_e=C[a][b]/0.893;
	      }

    return 0;
}