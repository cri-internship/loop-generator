#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(60, 120, "zeros");
	int *A = create_one_dim_int(160, "zeros");
	int **D = create_two_dim_int(70, 460, "zeros");
	int *B = create_one_dim_int(370, "zeros");

	for (int c = 3; c < 120; c++)
	  for (int b = 0; b < 60; b++)
	    for (int a = 0; a < 60; a++)
	    {
	      
	      C[a][b]=C[a][b-3]*14;
	      
	      D[a][b]=C[a][b];
	      D[a+2][b+2]=A[a];
	    }

    return 0;
}