#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(70, 380, 580, "random");
	float *A = create_one_dim_float(580, "random");
	float ***C = create_three_dim_float(860, 210, 120, "random");

	for (int c = 0; c < 119; c++)
	  for (int b = 0; b < 208; b++)
	    for (int a = 0; a < 65; a++)
	    {
	      
	      B[a][b][c]=B[a+3][b+1][c+4]/A[a]-C[a][b][c];
	      
	      B[a][b][c]=B[a+5][b+1][c+4]/0.365;
	      
	      C[a][b][c]=C[a+2][b+2][c+1]-0.538;
	    }

    return 0;
}