#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(500, "random");
	int **B = create_two_dim_int(840, 150, "random");

	for (int c = 4; c < 150; c++)
	  for (int b = 4; b < 500; b++)
	    for (int a = 4; a < 500; a++)
	    {
	      
	      A[a]=A[a-4]*42;
	      
	      B[a][b]=49;
	      B[a][b-4]=37;
	    }

    return 0;
}