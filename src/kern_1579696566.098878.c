#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(670, 330, 340, "zeros");
	double *A = create_one_dim_double(190, "zeros");

	for (int b = 0; b < 325; b++)
	  for (int a = 0; a < 188; a++)
	  {
	    
	     A[a]=B[a][b][a];
	     A[a+2]=B[a][b][a];
	    
	     A[a]=0.733;
	    
	     double var_a=B[a][b][a]/0.115;
	     double var_b=B[a+2][b+5][a]*0.9;
	  }

    return 0;
}