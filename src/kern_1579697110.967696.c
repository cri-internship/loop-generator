#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(370, 750, 1000, "ones");
	double ***A = create_three_dim_double(180, 950, 340, "ones");

	for (int b = 1; b < 945; b++)
	  for (int a = 1; a < 177; a++)
	  {
	    
	     A[a][b][a]=0.916;
	     A[a][b+5][a+3]=0.598;
	    
	     A[a][b][a]=B[a][b][a];
	  }

    return 0;
}