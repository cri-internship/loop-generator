#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(870, 920, 760, "random");

	for (int b = 0; b < 920; b++)
	  for (int a = 5; a < 870; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b][a-5]+0.603;
	  }

    return 0;
}