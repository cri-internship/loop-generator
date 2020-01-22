#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(620, 150, 800, "random");

	for (int b = 3; b < 150; b++)
	  for (int a = 2; a < 620; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-3][a-1]+0.425;
	  }

    return 0;
}