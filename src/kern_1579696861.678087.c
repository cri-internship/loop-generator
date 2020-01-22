#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(210, 540, 720, "zeros");
	float **B = create_two_dim_float(560, 600, "zeros");
	float *C = create_one_dim_float(680, "zeros");
	float ***D = create_three_dim_float(840, 550, 150, "zeros");

	for (int c = 0; c < 720; c++)
	  for (int b = 0; b < 540; b++)
	    for (int a = 4; a < 206; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b][c]/B[a][b];
	      
	      C[a]=D[a][b][c]+A[a][b][c]/B[a][b];
	      C[a-4]=A[a][b][c]+D[a][b][c];
	      
	      B[a][b]=B[a][b]+0.268/A[a][b][c];
	      C[a]=B[a][b+4]/C[a];
	    }

    return 0;
}