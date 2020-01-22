#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(860, 190, 810, "zeros");
	int **A = create_two_dim_int(440, 640, "zeros");
	int **C = create_two_dim_int(70, 790, "zeros");

	for (int b = 0; b < 788; b++)
	  for (int a = 3; a < 68; a++)
	  {
	    
	     C[a][b]=C[a+2][b+2]+5;
	    
	     C[a][b]=B[a][b][a];
	  }

    return 0;
}