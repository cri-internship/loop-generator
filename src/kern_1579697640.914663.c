#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(620, 400, "ones");
	double **B = create_two_dim_double(50, 680, "ones");

	for (int b = 4; b < 397; b++)
	  for (int a = 1; a < 50; a++)
	  {
	    
	     B[a][b]=B[a-1][b-4]-0.714;
	    
	     A[a][b]=A[a+2][b+3]-0.23;
	  }

    return 0;
}