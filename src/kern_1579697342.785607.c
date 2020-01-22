#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(360, 920, 720, "zeros");
	float *B = create_one_dim_float(130, "zeros");
	float ***A = create_three_dim_float(460, 400, 650, "zeros");

	for (int c = 4; c < 645; c++)
	  for (int b = 4; b < 398; b++)
	    for (int a = 5; a < 125; a++)
	    {
	      
	      A[a][b][c]=A[a+1][b+2][c+5]*B[a];
	      
	      A[a][b][c]=A[a+3][b+2][c]*0.826;
	      
	      B[a]=0.726;
	      B[a+5]=0.544;
	      
	      float var_a=C[a][b][c]*0.812;
	      float var_b=C[a][b-4][c-4]-0.678;
	      
	      float var_c=B[a]*0.958;
	      float var_d=B[a-1]-0.316;
	      
	      float var_e=B[a]-0.58;
	      float var_f=B[a-5]*0.329;
	    }

    return 0;
}