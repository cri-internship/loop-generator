#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(720, "random");
	int *B = create_one_dim_int(770, "random");

	for (int c = 0; c < 720; c++)
	  for (int b = 0; b < 720; b++)
	    for (int a = 0; a < 720; a++)
	    {
	      
	      A[a]=40;
	      A[a]=A[a]+25;
	    }

    return 0;
}