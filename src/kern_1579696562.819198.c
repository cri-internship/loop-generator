#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(290, 540, 330, "random");
	float *A = create_one_dim_float(300, "random");
	float ***B = create_three_dim_float(480, 730, 380, "random");

	for (int c = 1; c < 380; c++)
	  for (int b = 2; b < 730; b++)
	    for (int a = 5; a < 300; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-2][c-1]-C[a][b][c];
	      
	      A[a]=A[a-5]-B[a][b][c]*B[a][b][c];
	    }

    return 0;
}