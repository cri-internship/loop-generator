#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(760, "zeros");
	int ***B = create_three_dim_int(20, 390, 140, "zeros");
	int **D = create_two_dim_int(270, 860, "zeros");
	int ***A = create_three_dim_int(710, 570, 630, "zeros");

	for (int b = 2; b < 760; b++)
	  for (int a = 2; a < 760; a++)
	  {
	    
	     C[a]=C[a-2]*A[a][b][a];
	  }

    return 0;
}