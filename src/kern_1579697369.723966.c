#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(130, "zeros");
	int **C = create_two_dim_int(190, 370, "zeros");
	int *B = create_one_dim_int(60, "zeros");

	for (int c = 2; c < 128; c++)
	  for (int b = 2; b < 128; b++)
	    for (int a = 2; a < 128; a++)
	    {
	      
	      A[a]=A[a+2]+C[a][b];
	      
	      A[a]=A[a]+B[a]-C[a][b];
	      B[a]=A[a-2]-7;
	    }

    return 0;
}