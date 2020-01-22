#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(840, "ones");
	int **A = create_two_dim_int(730, 260, "ones");
	int *E = create_one_dim_int(480, "ones");
	int *B = create_one_dim_int(540, "ones");
	int *C = create_one_dim_int(330, "ones");

	for (int c = 0; c < 837; c++)
	  for (int b = 0; b < 837; b++)
	    for (int a = 0; a < 837; a++)
	    {
	      
	      D[a]=D[a+3]/B[a]*A[a][b]-E[a];
	    }

    return 0;
}