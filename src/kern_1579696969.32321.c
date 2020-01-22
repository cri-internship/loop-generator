#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(310, 40, 490, "random");
	float ***C = create_three_dim_float(1000, 180, 290, "random");
	float **B = create_two_dim_float(30, 360, "random");
	float **E = create_two_dim_float(560, 680, "random");
	float ***D = create_three_dim_float(900, 220, 440, "random");

	for (int c = 0; c < 285; c++)
	  for (int b = 0; b < 175; b++)
	    for (int a = 0; a < 556; a++)
	    {
	      
	      E[a][b]=E[a+4][b+5]/A[a][b][c];
	      
	      C[a][b][c]=E[a][b];
	      C[a+3][b+5][c+5]=0.685;
	    }

    return 0;
}