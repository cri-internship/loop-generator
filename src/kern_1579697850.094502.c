#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(200, 910, 820, "random");
	float *A = create_one_dim_float(460, "random");
	float **C = create_two_dim_float(440, 20, "random");

	for (int c = 0; c < 820; c++)
	  for (int b = 0; b < 17; b++)
	    for (int a = 0; a < 195; a++)
	    {
	      
	      C[a][b]=C[a+4][b+3]+0.504;
	      
	      B[a][b][c]=B[a+5][b+1][c]*0.103;
	      
	      C[a][b]=0.045;
	    }

    return 0;
}