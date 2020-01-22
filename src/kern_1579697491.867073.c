#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(310, 390, "random");
	float **B = create_two_dim_float(10, 910, "random");
	float ***C = create_three_dim_float(470, 550, 70, "random");

	for (int c = 0; c < 67; c++)
	  for (int b = 0; b < 550; b++)
	    for (int a = 0; a < 8; a++)
	    {
	      
	      C[a][b][c]=C[a+1][b][c+3]/B[a][b];
	      
	      B[a][b]=B[a+2][b+3]/0.834;
	    }

    return 0;
}