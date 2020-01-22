#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(460, 20, 150, "random");
	float **A = create_two_dim_float(290, 680, "random");
	float **B = create_two_dim_float(300, 450, "random");

	for (int c = 0; c < 145; c++)
	  for (int b = 5; b < 19; b++)
	    for (int a = 4; a < 290; a++)
	    {
	      
	      A[a][b]=A[a-4][b-2]+C[a][b][c]-B[a][b];
	      
	      A[a][b]=A[a-2][b-5]/0.756;
	      
	      C[a][b][c]=C[a+4][b+1][c+5]+0.592;
	      
	      C[a][b][c]=B[a][b]/0.703;
	      B[a][b]=B[a][b+1]*C[a][b][c]-A[a][b];
	    }

    return 0;
}