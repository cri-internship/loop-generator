#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(450, 560, 520, "zeros");
	float *D = create_one_dim_float(530, "zeros");
	float *C = create_one_dim_float(500, "zeros");
	float ***B = create_three_dim_float(650, 20, 610, "zeros");

	for (int c = 3; c < 519; c++)
	  for (int b = 2; b < 20; b++)
	    for (int a = 4; a < 446; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-2][c-3]+0.85;
	      
	      A[a][b][c]=A[a+4][b+4][c+1]/0.557;
	      
	      B[a][b][c]=C[a]*D[a];
	      C[a]=A[a][b][c]*B[a][b][c];
	      
	      B[a][b][c]=0.289;
	    }

    return 0;
}