#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(530, "ones");
	float ***B = create_three_dim_float(610, 270, 570, "ones");
	float **A = create_two_dim_float(580, 150, "ones");

	for (int c = 5; c < 145; c++)
	  for (int b = 3; b < 530; b++)
	    for (int a = 3; a < 530; a++)
	    {
	      
	      A[a][b]=A[a-3][b-2]+0.973;
	      
	      A[a][b]=0.874;
	      
	      float var_a=A[a][b]+0.665;
	      float var_b=A[a-1][b-5]*0.087;
	      
	      B[a][b][c]=C[a]/B[a][b][c]*A[a][b];
	      C[a]=C[a]*B[a][b][c]+A[a][b];
	      
	      A[a][b]=C[a]+0.065/B[a][b][c];
	      A[a][b]=C[a-3]-0.953;
	    }

    return 0;
}