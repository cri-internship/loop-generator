#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(730, 630, "random");
	int *A = create_one_dim_int(250, "random");

	for (int c = 0; c < 626; c++)
	  for (int b = 0; b < 727; b++)
	    for (int a = 0; a < 727; a++)
	    {
	      
	      B[a][b]=B[a+3][b+4]*6;
	    }

    return 0;
}