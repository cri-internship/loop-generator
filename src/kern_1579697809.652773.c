#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(580, 610, "ones");

	for (int b = 5; b < 608; b++)
	  for (int a = 0; a < 575; a++)
	  {
	    
	     A[a][b]=A[a][b-5]*0.4;
	    
	     double var_a=A[a][b]/0.218;
	     double var_b=A[a+5][b+2]/0.39;
	  }

    return 0;
}