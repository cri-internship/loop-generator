#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(680, "random");
	float **C = create_two_dim_float(590, 870, "random");
	float *E = create_one_dim_float(180, "random");
	float ***D = create_three_dim_float(710, 630, 430, "random");
	float ***A = create_three_dim_float(310, 690, 240, "random");

	for (int c = 0; c < 870; c++)
	  for (int b = 0; b < 588; b++)
	    for (int a = 0; a < 588; a++)
	    {
	      
	      C[a][b]=C[a+2][b]/B[a];
	      
	      C[a][b]=B[a]+C[a][b]-0.115/E[a];
	      E[a]=B[a+5]*A[a][b][c]+A[a][b][c]-E[a];
	    }

    return 0;
}