#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(700, 680, "ones");
	int **B = create_two_dim_int(100, 940, "ones");
	int **A = create_two_dim_int(840, 500, "ones");

	for (int c = 1; c < 500; c++)
	  for (int b = 4; b < 100; b++)
	    for (int a = 4; a < 100; a++)
	    {
	      
	      A[a][b]=A[a-3][b]+41;
	      
	      A[a][b]=A[a-1][b]-9;
	      
	      B[a][b]=B[a-3][b]/23;
	      
	      C[a][b]=C[a+2][b+2]*B[a][b];
	      
	      A[a][b]=A[a][b]-B[a][b];
	      B[a][b]=A[a-4][b]+C[a][b];
	    }

    return 0;
}