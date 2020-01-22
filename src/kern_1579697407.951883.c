#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(870, 300, "zeros");

	for (int b = 0; b < 298; b++)
	  for (int a = 0; a < 865; a++)
	  {
	    
	     A[a][b]=A[a][b+2]/0.814;
	    
	     A[a][b]=0.319;
	  }

    return 0;
}