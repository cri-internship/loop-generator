#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(140, 1000, 90, "zeros");
	float **E = create_two_dim_float(220, 690, "zeros");
	float **C = create_two_dim_float(910, 320, "zeros");
	float *D = create_one_dim_float(950, "zeros");
	float ***B = create_three_dim_float(110, 640, 480, "zeros");

	for (int c = 1; c < 90; c++)
	  for (int b = 3; b < 690; b++)
	    for (int a = 2; a < 140; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-3][c-1]/0.658;
	      
	      E[a][b]=E[a-2][b-2]-0.542;
	    }

    return 0;
}