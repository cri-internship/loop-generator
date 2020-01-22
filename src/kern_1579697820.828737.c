#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(910, 40, "zeros");
	int ***B = create_three_dim_int(380, 810, 180, "zeros");
	int ***A = create_three_dim_int(810, 860, 120, "zeros");

	for (int b = 4; b < 860; b++)
	  for (int a = 5; a < 810; a++)
	  {
	    
	     C[a][b]=A[a][b][a]*B[a][b][a];
	     B[a][b][a]=A[a-5][b-4][a-1]+C[a][b];
	  }

    return 0;
}