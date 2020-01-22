#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(570, 430, 540, "zeros");
	double *B = create_one_dim_double(830, "zeros");

	for (int b = 0; b < 430; b++)
	  for (int a = 2; a < 567; a++)
	  {
	    
	     B[a]=B[a-2]*0.179;
	    
	     double var_a=A[a][b][a]+0.849;
	     double var_b=A[a+3][b][a+3]/0.623;
	  }

    return 0;
}