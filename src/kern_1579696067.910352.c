#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(980, 740, 60, "ones");
	float **D = create_two_dim_float(570, 350, "ones");
	float *B = create_one_dim_float(340, "ones");
	float **C = create_two_dim_float(590, 320, "ones");

	for (int c = 0; c < 60; c++)
	  for (int b = 3; b < 320; b++)
	    for (int a = 0; a < 569; a++)
	    {
	      
	      A[a][b][c]=A[a][b-3][c]-C[a][b]*B[a]/D[a][b];
	      
	      D[a][b]=D[a+1][b+3]+0.482;
	      
	      float var_a=C[a][b]-0.533;
	      float var_b=C[a][b-3]*0.762;
	    }

    return 0;
}