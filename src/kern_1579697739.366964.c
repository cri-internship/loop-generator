#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(550, 40, 760, "random");
	float *D = create_one_dim_float(500, "random");
	float ***C = create_three_dim_float(230, 370, 200, "random");
	float ***B = create_three_dim_float(240, 340, 200, "random");

	for (int c = 3; c < 200; c++)
	  for (int b = 2; b < 40; b++)
	    for (int a = 4; a < 230; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b-2][c-2]/D[a]-A[a][b][c]+B[a][b][c];
	      
	      A[a][b][c]=A[a-1][b-2][c-3]/C[a][b][c]+C[a][b][c]*B[a][b][c];
	      
	      B[a][b][c]=B[a-4][b-1][c]-C[a][b][c]/A[a][b][c]*D[a];
	      
	      float var_a=D[a]-0.262;
	      D[a]=0.691;
	      
	      float var_b=B[a][b][c]-0.043;
	      float var_c=B[a-2][b-2][c-2]+0.587;
	    }

    return 0;
}