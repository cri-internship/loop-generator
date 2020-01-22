#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(170, 10, "ones");
	float ***A = create_three_dim_float(490, 460, 560, "ones");
	float ***C = create_three_dim_float(640, 900, 430, "ones");

	for (int c = 5; c < 430; c++)
	  for (int b = 2; b < 7; b++)
	    for (int a = 5; a < 166; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b-2][c-5]/0.565;
	      
	      C[a][b][c]=C[a-5][b-1][c-5]-0.476;
	      
	      A[a][b][c]=0.198;
	      A[a-5][b-2][c-2]=0.634;
	      
	      B[a][b]=0.084;
	      B[a+4][b+3]=0.565;
	      
	      A[a][b][c]=0.861;
	      
	      B[a][b]=C[a][b][c]-B[a][b]*A[a][b][c];
	      C[a][b][c]=C[a-4][b-2][c-3]*A[a][b][c]/B[a][b];
	    }

    return 0;
}