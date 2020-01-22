#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(810, "ones");
	int ***B = create_three_dim_int(840, 460, 140, "ones");
	int **C = create_two_dim_int(870, 500, "ones");
	int ***D = create_three_dim_int(650, 230, 170, "ones");

	for (int c = 1; c < 810; c++)
	  for (int b = 1; b < 810; b++)
	    for (int a = 1; a < 810; a++)
	    {
	      
	      A[a]=A[a-1]*20;
	    }

    return 0;
}