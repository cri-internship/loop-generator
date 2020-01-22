#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(770, 680, "ones");

	for (int b = 1; b < 676; b++)
	  for (int a = 4; a < 767; a++)
	  {
	    
	     A[a][b]=A[a-2][b-1]-0.82;
	    
	     A[a][b]=0.493;
	    
	     double var_a=A[a][b]*0.361;
	     double var_b=A[a+3][b+4]/0.332;
	  }

    return 0;
}