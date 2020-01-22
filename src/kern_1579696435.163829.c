#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(730, 90, "random");
	float ***C = create_three_dim_float(750, 670, 420, "random");
	float **A = create_two_dim_float(80, 240, "random");

	for (int c = 0; c < 416; c++)
	  for (int b = 2; b < 90; b++)
	    for (int a = 4; a < 730; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b][c]-0.599*A[a][b];
	      
	      B[a][b]=B[a-2][b-2]-0.423;
	      
	      B[a][b]=C[a][b][c]*B[a][b];
	      C[a][b][c]=C[a+5][b][c+4]-0.164+B[a][b];
	    }

    return 0;
}