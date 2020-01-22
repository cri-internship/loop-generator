#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(400, 980, "random");
	double **B = create_two_dim_double(610, 310, "random");

	for (int b = 4; b < 305; b++)
	  for (int a = 4; a < 399; a++)
	  {
	    
	     B[a][b]=B[a][b-3]*0.671;
	    
	     B[a][b]=B[a-4][b-3]*0.006;
	    
	     A[a][b]=0.614;
	     A[a+1][b+3]=0.256;
	    
	     double var_a=B[a][b]*0.38;
	     double var_b=B[a+5][b+5]+0.725;
	  }

    return 0;
}