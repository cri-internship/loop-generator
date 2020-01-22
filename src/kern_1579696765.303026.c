#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(410, 880, "random");
	int **A = create_two_dim_int(270, 500, "random");
	int *B = create_one_dim_int(130, "random");
	int *D = create_one_dim_int(10, "random");

	for (int c = 4; c < 500; c++)
	  for (int b = 5; b < 270; b++)
	    for (int a = 5; a < 270; a++)
	    {
	      
	      A[a][b]=4;
	      A[a-5][b-4]=30;
	    }

    return 0;
}