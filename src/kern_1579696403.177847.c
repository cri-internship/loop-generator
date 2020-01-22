#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(550, 240, "ones");
	int **B = create_two_dim_int(110, 540, "ones");

	for (int c = 0; c < 239; c++)
	  for (int b = 0; b < 548; b++)
	    for (int a = 0; a < 548; a++)
	    {
	      
	      B[a][b]=A[a][b]-B[a][b];
	      A[a][b]=A[a+2][b+1]/B[a][b];
	    }

    return 0;
}