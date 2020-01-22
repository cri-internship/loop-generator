#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(130, 970, "random");
	int **B = create_two_dim_int(340, 880, "random");
	int *C = create_one_dim_int(620, "random");

	for (int c = 2; c < 620; c++)
	  for (int b = 2; b < 620; b++)
	    for (int a = 2; a < 620; a++)
	    {
	      
	      C[a]=C[a-2]-23;
	      
	      C[a]=B[a][b];
	    }

    return 0;
}