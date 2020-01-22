#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(60, 800, "ones");
	int *B = create_one_dim_int(930, "ones");

	for (int c = 5; c < 930; c++)
	  for (int b = 5; b < 930; b++)
	    for (int a = 5; a < 930; a++)
	    {
	      
	      B[a]=B[a-5]*47;
	    }

    return 0;
}