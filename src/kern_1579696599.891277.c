#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(510, 680, 440, "random");
	double ***B = create_three_dim_double(50, 50, 470, "random");

	for (int b = 0; b < 679; b++)
	  for (int a = 0; a < 508; a++)
	  {
	    
	     double var_a=A[a][b][a]*0.979;
	     double var_b=A[a+2][b+1][a+2]*0.9;
	  }

    return 0;
}