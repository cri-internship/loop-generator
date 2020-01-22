#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(440, 980, "ones");
	int ***B = create_three_dim_int(920, 640, 920, "ones");
	int **C = create_two_dim_int(840, 630, "ones");
	int *A = create_one_dim_int(260, "ones");

	for (int c = 0; c < 629; c++)
	  for (int b = 0; b < 436; b++)
	    for (int a = 0; a < 436; a++)
	    {
	      
	      C[a][b]=C[a+4][b+1]/13;
	      
	      D[a][b]=D[a+4][b+1]-50;
	    }

    return 0;
}