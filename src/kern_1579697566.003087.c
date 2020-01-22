#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(30, "zeros");
	int *B = create_one_dim_int(520, "zeros");
	int **A = create_two_dim_int(1000, 520, "zeros");

	for (int c = 2; c < 30; c++)
	  for (int b = 2; b < 30; b++)
	    for (int a = 2; a < 30; a++)
	    {
	      
	      C[a]=B[a];
	      A[a][b]=C[a]/A[a][b];
	      
	      B[a]=C[a];
	      B[a+4]=C[a];
	      
	      C[a]=B[a]/A[a][b]-C[a];
	      B[a]=B[a-2]-A[a][b]*50;
	    }

    return 0;
}