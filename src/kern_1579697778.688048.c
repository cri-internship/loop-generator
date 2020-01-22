#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(740, 630, 830, "ones");
	double **A = create_two_dim_double(40, 310, "ones");

	for (int b = 5; b < 310; b++)
	  for (int a = 3; a < 40; a++)
	  {
	    
	     B[a][b][a]=B[a][b+3][a+2]+0.889;
	    
	     double var_a=A[a][b]-0.179;
	     double var_b=A[a-3][b-5]*0.966;
	  }

    return 0;
}