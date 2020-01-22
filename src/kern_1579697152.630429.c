#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(610, "zeros");
	float ***D = create_three_dim_float(220, 150, 660, "zeros");
	float ***C = create_three_dim_float(670, 380, 980, "zeros");
	float ***B = create_three_dim_float(660, 590, 660, "zeros");

	for (int c = 0; c < 655; c++)
	  for (int b = 0; b < 147; b++)
	    for (int a = 0; a < 218; a++)
	    {
	      
	      B[a][b][c]=B[a+1][b+3][c+5]-0.35;
	      
	      C[a][b][c]=0.201;
	      C[a][b+2][c+4]=0.121;
	      
	      float var_a=D[a][b][c]*0.545;
	      float var_b=D[a+2][b+3][c+5]*0.06;
	      
	      float var_c=A[a]-0.644;
	      float var_d=A[a+3]+0.084;
	      
	      A[a]=D[a][b][c]+A[a]-C[a][b][c];
	      D[a][b][c]=D[a+2][b+2][c+2]/B[a][b][c]-C[a][b][c]*A[a];
	    }

    return 0;
}