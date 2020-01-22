#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(640, 400, "zeros");
	int *C = create_one_dim_int(630, "zeros");
	int **A = create_two_dim_int(480, 340, "zeros");

	for (int c = 4; c < 340; c++)
	  for (int b = 5; b < 480; b++)
	    for (int a = 5; a < 480; a++)
	    {
	      
	      B[a][b]=B[a-4][b-2]/C[a]+A[a][b];
	      
	      A[a][b]=A[a-5][b-2]/B[a][b]*43;
	      
	      C[a]=C[a+3]*45;
	      
	      C[a]=C[a+5]+A[a][b];
	      
	      B[a][b]=35;
	      
	      B[a][b]=B[a][b]+A[a][b]*C[a];
	      C[a]=B[a][b-3]-C[a];
	    }

    return 0;
}