#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(950, 40, "zeros");
	float *A = create_one_dim_float(460, "zeros");
	float ***B = create_three_dim_float(290, 770, 720, "zeros");
	float ***C = create_three_dim_float(550, 360, 170, "zeros");
	float **E = create_two_dim_float(110, 30, "zeros");

	for (int c = 3; c < 170; c++)
	  for (int b = 4; b < 30; b++)
	    for (int a = 5; a < 110; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b][c-3]+0.552;
	      
	      E[a][b]=E[a-4][b]+0.778;
	      
	      E[a][b]=E[a-2][b-4]-0.448;
	    }

    return 0;
}