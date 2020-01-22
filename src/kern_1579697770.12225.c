#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(110, "ones");
	int **A = create_two_dim_int(90, 60, "ones");
	int **B = create_two_dim_int(570, 790, "ones");
	int **D = create_two_dim_int(380, 450, "ones");
	int **E = create_two_dim_int(270, 570, "ones");

	for (int c = 0; c < 59; c++)
	  for (int b = 0; b < 86; b++)
	    for (int a = 0; a < 86; a++)
	    {
	      
	      E[a][b]=E[a+2][b+4]+C[a]-B[a][b];
	      
	      A[a][b]=38;
	      A[a+4][b+1]=39;
	    }

    return 0;
}