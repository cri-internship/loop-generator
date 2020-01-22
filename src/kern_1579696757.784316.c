#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(450, "zeros");
	float ***C = create_three_dim_float(50, 920, 530, "zeros");
	float ***A = create_three_dim_float(680, 440, 840, "zeros");
	float ***D = create_three_dim_float(210, 200, 130, "zeros");

	for (int c = 2; c < 530; c++)
	  for (int b = 5; b < 440; b++)
	    for (int a = 5; a < 50; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b-5][c-2]/B[a]+A[a][b][c]-D[a][b][c];
	      
	      A[a][b][c]=C[a][b][c]*C[a][b][c]/D[a][b][c];
	      A[a-4][b-3][c-2]=0.825+B[a]*C[a][b][c];
	      
	      float var_a=B[a]*0.22;
	      float var_b=B[a-4]/0.296;
	    }

    return 0;
}