#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(580, 660, 910, "zeros");
	float **C = create_two_dim_float(690, 210, "zeros");
	float ***B = create_three_dim_float(600, 170, 570, "zeros");
	float **A = create_two_dim_float(20, 40, "zeros");
	float *D = create_one_dim_float(750, "zeros");

	for (int c = 0; c < 908; c++)
	  for (int b = 5; b < 40; b++)
	    for (int a = 2; a < 17; a++)
	    {
	      
	      C[a][b]=C[a-2][b-5]+0.567;
	      
	      E[a][b][c]=E[a+5][b+5][c+2]-0.032;
	      
	      float var_a=A[a][b]*0.116;
	      float var_b=A[a+3][b]+0.16;
	    }

    return 0;
}