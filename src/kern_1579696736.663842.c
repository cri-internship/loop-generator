#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(960, 910, 870, "random");
	float **B = create_two_dim_float(790, 120, "random");
	float **C = create_two_dim_float(740, 50, "random");

	for (int c = 5; c < 870; c++)
	  for (int b = 5; b < 910; b++)
	    for (int a = 5; a < 960; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-5][c-1]*0.685/C[a][b];
	      
	      float var_a=A[a][b][c]*0.148;
	      float var_b=A[a][b-1][c-4]*0.43;
	      
	      float var_c=A[a][b][c]-0.02;
	      float var_d=A[a-5][b-1][c-5]-0.612;
	    }

    return 0;
}