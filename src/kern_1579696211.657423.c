#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(290, 140, "zeros");

	for (int b = 4; b < 138; b++)
	  for (int a = 2; a < 287; a++)
	  {
	    
	     A[a][b]=A[a-2][b-4]+0.878;
	    
	     A[a][b]=A[a][b+2]+0.312;
	  }

    return 0;
}