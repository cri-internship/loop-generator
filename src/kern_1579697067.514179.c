#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(970, 180, "random");
	int ***B = create_three_dim_int(620, 350, 320, "random");
	int *A = create_one_dim_int(200, "random");

	for (int c = 4; c < 320; c++)
	  for (int b = 5; b < 350; b++)
	    for (int a = 4; a < 620; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-5][c-4]+C[a][b]/A[a];
	    }

    return 0;
}