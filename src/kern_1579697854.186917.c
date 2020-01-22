#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(640, "zeros");
	int **C = create_two_dim_int(450, 990, "zeros");
	int *B = create_one_dim_int(650, "zeros");
	int ***A = create_three_dim_int(920, 600, 360, "zeros");
	int *E = create_one_dim_int(410, "zeros");

	for (int b = 0; b < 990; b++)
	  for (int a = 5; a < 410; a++)
	  {
	    
	     E[a]=E[a-5]*34;
	    
	     C[a][b]=46;
	     C[a+5][b]=42;
	  }

    return 0;
}