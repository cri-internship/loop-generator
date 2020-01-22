#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(200, 330, "zeros");
	int *B = create_one_dim_int(320, "zeros");
	int **C = create_two_dim_int(500, 800, "zeros");

	for (int c = 3; c < 326; c++)
	  for (int b = 5; b < 196; b++)
	    for (int a = 5; a < 196; a++)
	    {
	      
	      C[a][b]=C[a-3][b-3]+47;
	      
	      C[a][b]=C[a-5][b-2]/30;
	      
	      C[a][b]=A[a][b]-C[a][b]/B[a];
	      A[a][b]=C[a][b]+B[a];
	      
	      A[a][b]=A[a+4][b+4]*40;
	      
	      B[a]=A[a][b]-C[a][b];
	      A[a][b]=A[a+4][b]+C[a][b];
	    }

    return 0;
}