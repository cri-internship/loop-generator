#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(350, 380, 70, "ones");

	for (int b = 1; b < 375; b++)
	  for (int a = 4; a < 348; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-1][a-2]-0.032;
	    
	     A[a][b][a]=A[a+2][b+5][a+2]/0.323;
	  }

    return 0;
}