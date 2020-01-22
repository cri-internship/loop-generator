#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(110, "zeros");
	double *B = create_one_dim_double(520, "zeros");
	double ***C = create_three_dim_double(550, 330, 320, "zeros");

	for (int b = 0; b < 325; b++)
	  for (int a = 2; a < 109; a++)
	  {
	    
	     C[a][b][a]=C[a+5][b+5][a+5]/B[a]-A[a];
	    
	     A[a]=0.912;
	     A[a+1]=0.972;
	    
	     double var_a=B[a]+0.787;
	     double var_b=B[a-2]/0.648;
	  }

    return 0;
}