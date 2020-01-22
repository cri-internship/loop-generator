#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(320, "zeros");
	int **D = create_two_dim_int(380, 770, "zeros");
	int **B = create_two_dim_int(130, 480, "zeros");
	int **A = create_two_dim_int(110, 430, "zeros");

	for (int c = 0; c < 430; c++)
	  for (int b = 2; b < 110; b++)
	    for (int a = 2; a < 110; a++)
	    {
	      
	      A[a][b]=A[a-2][b]*B[a][b]-C[a]+D[a][b];
	    }

    return 0;
}