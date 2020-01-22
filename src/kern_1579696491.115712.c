#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(780, 650, 830, "ones");
	float ***B = create_three_dim_float(720, 50, 580, "ones");
	float **D = create_two_dim_float(140, 130, "ones");
	float *C = create_one_dim_float(20, "ones");
	float **A = create_two_dim_float(760, 610, "ones");

	for (int c = 0; c < 578; c++)
	  for (int b = 2; b < 45; b++)
	    for (int a = 5; a < 19; a++)
	    {
	      
	      E[a][b][c]=E[a-4][b][c]*A[a][b]/C[a]-0.815+B[a][b][c];
	      
	      E[a][b][c]=E[a+1][b+5][c]+0.071;
	      
	      C[a]=C[a+1]-E[a][b][c]/0.509;
	      
	      D[a][b]=0.883;
	      D[a-5][b-2]=0.051;
	      
	      float var_a=B[a][b][c]+0.454;
	      float var_b=B[a+4][b+5][c+2]*0.728;
	    }

    return 0;
}