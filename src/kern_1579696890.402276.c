#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(620, 890, "ones");
	double *B = create_one_dim_double(80, "ones");
	double ***A = create_three_dim_double(170, 800, 1000, "ones");

	for (int b = 0; b < 800; b++)
	  for (int a = 0; a < 167; a++)
	  {
	    
	     C[a][b]=C[a+1][b]+0.151;
	    
	     C[a][b]=0.62;
	    
	     double var_a=A[a][b][a]-0.275;
	     double var_b=A[a+2][b][a+3]-0.25;
	  }

    return 0;
}