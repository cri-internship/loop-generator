#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(770, 890, 660, "random");
	float ***B = create_three_dim_float(490, 280, 220, "random");
	float *C = create_one_dim_float(210, "random");

	for (int c = 2; c < 220; c++)
	  for (int b = 5; b < 280; b++)
	    for (int a = 2; a < 210; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-5][c-2]/0.25;
	      
	      C[a]=C[a-1]*A[a][b][c]+0.506;
	      
	      A[a][b][c]=A[a+1][b+1][c+2]*C[a];
	      
	      C[a]=B[a][b][c]-0.654;
	      B[a][b][c]=B[a][b-5][c-1]-A[a][b][c];
	    }

    return 0;
}