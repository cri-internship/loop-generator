#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(480, 150, "zeros");
	int **C = create_two_dim_int(640, 580, "zeros");
	int ***D = create_three_dim_int(810, 980, 30, "zeros");
	int *A = create_one_dim_int(400, "zeros");
	int **B = create_two_dim_int(400, 790, "zeros");

	for (int c = 2; c < 30; c++)
	  for (int b = 1; b < 980; b++)
	    for (int a = 5; a < 810; a++)
	    {
	      
	      D[a][b][c]=D[a-5][b-1][c-2]/21;
	    }

    return 0;
}