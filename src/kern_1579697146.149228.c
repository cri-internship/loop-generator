#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(410, "zeros");
	int *D = create_one_dim_int(390, "zeros");
	int **B = create_two_dim_int(140, 340, "zeros");
	int **A = create_two_dim_int(370, 380, "zeros");

	for (int c = 5; c < 340; c++)
	  for (int b = 3; b < 140; b++)
	    for (int a = 3; a < 140; a++)
	    {
	      
	      C[a]=D[a];
	      B[a][b]=C[a]*50;
	      
	      A[a][b]=A[a][b-5]+25;
	      
	      D[a]=D[a-2]+34/C[a];
	      
	      C[a]=C[a-3]-9;
	      
	      B[a][b]=B[a-3][b-3]*A[a][b];
	    }

    return 0;
}