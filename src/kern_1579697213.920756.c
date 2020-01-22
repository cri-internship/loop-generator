#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(440, 90, 740, "zeros");
	float **C = create_two_dim_float(170, 420, "zeros");
	float **A = create_two_dim_float(490, 790, "zeros");
	float *B = create_one_dim_float(500, "zeros");
	float ***D = create_three_dim_float(380, 210, 160, "zeros");

	for (int c = 3; c < 740; c++)
	  for (int b = 4; b < 90; b++)
	    for (int a = 5; a < 168; a++)
	    {
	      
	      C[a][b]=C[a-2][b-4]-D[a][b][c]/A[a][b]*E[a][b][c]+B[a];
	      
	      E[a][b][c]=E[a-4][b-4][c-3]-C[a][b]/D[a][b][c]*B[a]+A[a][b];
	      
	      B[a]=B[a-3]*0.018;
	      
	      E[a][b][c]=E[a-5][b-3][c-1]-B[a]+D[a][b][c];
	      
	      C[a][b]=C[a][b-2]+0.14;
	      
	      A[a][b]=A[a+3][b+1]+E[a][b][c]*D[a][b][c]-B[a];
	      
	      C[a][b]=C[a+2][b]+0.438;
	    }

    return 0;
}