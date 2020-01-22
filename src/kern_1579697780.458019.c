#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(930, 480, "random");
	double ***B = create_three_dim_double(70, 160, 820, "random");
	double *C = create_one_dim_double(380, "random");

	for (int b = 5; b < 160; b++)
	  for (int a = 4; a < 70; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-4][a-2]/0.088;
	    
	     B[a][b][a]=0.842;
	    
	     double var_a=A[a][b]+0.525;
	     double var_b=A[a+2][b+2]-0.835;
	  }

    return 0;
}