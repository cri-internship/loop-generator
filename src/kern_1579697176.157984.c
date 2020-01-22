#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(730, 240, "zeros");
	int *B = create_one_dim_int(330, "zeros");

	for (int c = 0; c < 325; c++)
	  for (int b = 0; b < 325; b++)
	    for (int a = 0; a < 325; a++)
	    {
	      
	      B[a]=3;
	      B[a+5]=1;
	    }

    return 0;
}