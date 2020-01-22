#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(680, "zeros");
	int *B = create_one_dim_int(190, "zeros");

	for (int c = 0; c < 190; c++)
	  for (int b = 0; b < 190; b++)
	    for (int a = 0; a < 190; a++)
	    {
	      
	      B[a]=5;
	      B[a]=48;
	    }

    return 0;
}