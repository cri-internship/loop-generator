#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(420, 920, "zeros");
	float **C = create_two_dim_float(390, 600, "zeros");
	float **D = create_two_dim_float(720, 320, "zeros");
	float ***B = create_three_dim_float(960, 20, 380, "zeros");

	for (int c = 4; c < 378; c++)
	  for (int b = 4; b < 15; b++)
	    for (int a = 3; a < 385; a++)
	    {
	      
	      D[a][b]=D[a][b-4]*0.654;
	      
	      B[a][b][c]=B[a][b-3][c-4]*0.91;
	      
	      C[a][b]=C[a-1][b-3]*D[a][b]/A[a][b]-B[a][b][c];
	      
	      A[a][b]=A[a-3][b-2]-0.086;
	      
	      B[a][b][c]=B[a+5][b+2][c+2]-C[a][b];
	      
	      C[a][b]=C[a+5][b+4]*0.668;
	    }

    return 0;
}