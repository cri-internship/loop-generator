#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(120, 320, 460, "ones");
	int *C = create_one_dim_int(750, "ones");
	int ***A = create_three_dim_int(440, 70, 840, "ones");
	int *B = create_one_dim_int(80, "ones");

	for (int c = 0; c < 460; c++)
	  for (int b = 5; b < 320; b++)
	    for (int a = 5; a < 76; a++)
	    {
	      
	      B[a]=B[a-1]*38;
	      
	      B[a]=B[a+4]-35;
	      
	      C[a]=D[a][b][c]-A[a][b][c]/C[a];
	      B[a]=D[a-5][b-5][c]/B[a];
	    }

    return 0;
}