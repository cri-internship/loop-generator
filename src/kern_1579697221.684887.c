#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(270, "ones");
	int ***C = create_three_dim_int(870, 320, 210, "ones");
	int *B = create_one_dim_int(230, "ones");
	int *D = create_one_dim_int(870, "ones");

	for (int c = 0; c < 206; c++)
	  for (int b = 0; b < 319; b++)
	    for (int a = 0; a < 225; a++)
	    {
	      
	      A[a]=A[a+3]-14+C[a][b][c];
	      
	      C[a][b][c]=C[a+3][b+1][c+4]*B[a]+A[a];
	      
	      B[a]=B[a+5]*11;
	      
	      B[a]=A[a]+C[a][b][c]/D[a];
	      
	      A[a]=D[a]*B[a]/A[a]+C[a][b][c];
	      B[a]=D[a+1]-C[a][b][c];
	    }

    return 0;
}