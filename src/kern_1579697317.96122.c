#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(30, 800, "zeros");

	for (int c = 0; c < 798; c++)
	  for (int b = 0; b < 25; b++)
	    for (int a = 0; a < 25; a++)
	    {
	      
	      double var_a=A[a][b]*0.289;
	      double var_b=A[a+5][b+2]+0.585;
	    }

    return 0;
}