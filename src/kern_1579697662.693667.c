#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(450, "random");
	int *C = create_one_dim_int(880, "random");
	int ***B = create_three_dim_int(570, 110, 140, "random");

	for (int c = 4; c < 446; c++)
	  for (int b = 4; b < 446; b++)
	    for (int a = 4; a < 446; a++)
	    {
	      
	      C[a]=C[a-4]/A[a];
	      
	      C[a]=C[a-1]-39;
	      
	      A[a]=C[a]+A[a];
	      
	      A[a]=1;
	    }

    return 0;
}