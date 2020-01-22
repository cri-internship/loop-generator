#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(640, 320, 780, "zeros");
	double **B = create_two_dim_double(230, 120, "zeros");

	for (int b = 5; b < 120; b++)
	  for (int a = 4; a < 225; a++)
	  {
	    
	     A[a][b][a]=A[a][b-5][a-4]*0.339;
	    
	     B[a][b]=0.297;
	     B[a+5][b]=0.71;
	    
	     double var_a=A[a][b][a]/0.497;
	     double var_b=A[a-2][b-2][a-4]/0.497;
	  }

    return 0;
}