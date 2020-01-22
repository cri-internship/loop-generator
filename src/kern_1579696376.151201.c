#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(570, 400, 200, "random");
	int *A = create_one_dim_int(160, "random");
	int *E = create_one_dim_int(50, "random");
	int ***C = create_three_dim_int(70, 550, 480, "random");
	int ***B = create_three_dim_int(80, 730, 410, "random");

	for (int c = 1; c < 160; c++)
	  for (int b = 1; b < 160; b++)
	    for (int a = 1; a < 160; a++)
	    {
	      
	      A[a]=27;
	      A[a-1]=24;
	    }

    return 0;
}