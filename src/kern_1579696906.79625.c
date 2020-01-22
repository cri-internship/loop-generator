#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(970, "random");
	int **B = create_two_dim_int(600, 550, "random");

	for (int c = 5; c < 550; c++)
	  for (int b = 5; b < 600; b++)
	    for (int a = 5; a < 600; a++)
	    {
	      
	      B[a][b]=B[a-2][b-5]+A[a];
	      
	      B[a][b]=B[a-3][b-5]*A[a];
	    }

    return 0;
}