#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(620, 1000, 60, "random");
	float ***C = create_three_dim_float(200, 110, 270, "random");
	float *D = create_one_dim_float(340, "random");
	float *A = create_one_dim_float(680, "random");
	float **B = create_two_dim_float(560, 250, "random");

	for (int c = 0; c < 56; c++)
	  for (int b = 0; b < 999; b++)
	    for (int a = 5; a < 340; a++)
	    {
	      
	      E[a][b][c]=0.748;
	      E[a+4][b+1][c+4]=0.739;
	      
	      A[a]=0.942;
	      A[a+3]=0.977;
	      
	      float var_a=D[a]+0.524;
	      float var_b=D[a-5]-0.249;
	    }

    return 0;
}