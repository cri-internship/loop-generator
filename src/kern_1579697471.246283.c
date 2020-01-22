#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(480, 300, 210, "ones");

	for (int b = 0; b < 295; b++)
	  for (int a = 0; a < 475; a++)
	  {
	    
	     A[a][b][a]=A[a+1][b+5][a+5]-0.053;
	  }

    return 0;
}