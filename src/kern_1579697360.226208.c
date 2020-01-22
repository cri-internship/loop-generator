#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(130, 730, 780, "zeros");

	for (int b = 3; b < 730; b++)
	  for (int a = 4; a < 130; a++)
	  {
	    
	     A[a][b][a]=0.236;
	     A[a-4][b-3][a-1]=0.664;
	  }

    return 0;
}