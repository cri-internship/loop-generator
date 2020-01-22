#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(20, 860, "random");
	float ***B = create_three_dim_float(460, 570, 860, "random");
	float **C = create_two_dim_float(530, 920, "random");
	float ***A = create_three_dim_float(910, 790, 130, "random");

	for (int c = 3; c < 125; c++)
	  for (int b = 3; b < 785; b++)
	    for (int a = 4; a < 908; a++)
	    {
	      
	      A[a][b][c]=0.727;
	      A[a+2][b+5][c+5]=0.209;
	      
	      float var_a=A[a][b][c]*0.687;
	      float var_b=A[a-4][b-3][c-3]/0.581;
	    }

    return 0;
}