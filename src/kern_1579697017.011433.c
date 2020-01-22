#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(150, 200, "zeros");
	float **D = create_two_dim_float(70, 520, "zeros");
	float ***A = create_three_dim_float(770, 830, 320, "zeros");
	float **B = create_two_dim_float(770, 780, "zeros");

	for (int c = 0; c < 315; c++)
	  for (int b = 1; b < 200; b++)
	    for (int a = 1; a < 145; a++)
	    {
	      
	      C[a][b]=C[a+5][b]/0.487;
	      
	      A[a][b][c]=A[a][b+3][c]/D[a][b];
	      
	      B[a][b]=A[a][b][c];
	      B[a+4][b+1]=0.753*C[a][b];
	      
	      B[a][b]=0.225;
	      
	      A[a][b][c]=0.923;
	    }

    return 0;
}