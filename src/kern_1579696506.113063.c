#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(220, 100, 660, "zeros");
	float **A = create_two_dim_float(190, 690, "zeros");
	float ***B = create_three_dim_float(560, 280, 210, "zeros");

	for (int c = 4; c < 210; c++)
	  for (int b = 5; b < 280; b++)
	    for (int a = 5; a < 187; a++)
	    {
	      
	      A[a][b]=A[a-3][b-5]-B[a][b][c]+C[a][b][c];
	      
	      A[a][b]=A[a-1][b-5]-C[a][b][c];
	      
	      B[a][b][c]=B[a-4][b-2][c-2]*A[a][b]-A[a][b];
	      
	      C[a][b][c]=B[a][b][c]/A[a][b]-C[a][b][c];
	      A[a][b]=B[a-3][b][c-3]+C[a][b][c]-A[a][b];
	      
	      float var_a=A[a][b]*0.932;
	      float var_b=A[a+3][b]+0.909;
	      
	      float var_c=B[a][b][c]*0.185;
	      float var_d=B[a-2][b-5][c-4]*0.919;
	    }

    return 0;
}