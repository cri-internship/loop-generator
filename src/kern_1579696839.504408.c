#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(990, "ones");
	double **B = create_two_dim_double(450, 390, "ones");
	double ***A = create_three_dim_double(100, 330, 40, "ones");
	double *C = create_one_dim_double(160, "ones");
	double **E = create_two_dim_double(480, 560, "ones");

	for (int d = 5; d < 40; d++)
	  for (int c = 4; c < 330; c++)
	    for (int b = 0; b < 100; b++)
	      for (int a = 0; a < 100; a++)
	      {
	        
	       double var_a=A[a][b][c]+0.675;
	       double var_b=A[a][b-4][c-5]+0.182;
	      }

    return 0;
}