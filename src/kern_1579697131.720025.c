#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(700, 240, "zeros");
	int **C = create_two_dim_int(500, 380, "zeros");
	int **D = create_two_dim_int(530, 730, "zeros");
	int ***A = create_three_dim_int(270, 770, 10, "zeros");

	for (int c = 4; c < 380; c++)
	  for (int b = 3; b < 500; b++)
	    for (int a = 3; a < 500; a++)
	    {
	      
	      C[a][b]=C[a-3][b-4]-36;
	      
	      C[a][b]=D[a][b]*B[a][b];
	    }

    return 0;
}