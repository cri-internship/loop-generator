#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(110, 240, 300, "ones");
	float **C = create_two_dim_float(300, 780, "ones");
	float ***B = create_three_dim_float(300, 980, 790, "ones");

	for (int c = 0; c < 295; c++)
	  for (int b = 1; b < 237; b++)
	    for (int a = 5; a < 107; a++)
	    {
	      
	      C[a][b]=C[a-3][b-1]*0.103;
	      
	      B[a][b][c]=B[a-5][b-1][c]-A[a][b][c]/0.227;
	      
	      C[a][b]=C[a+3][b+2]*B[a][b][c];
	      
	      C[a][b]=C[a+2][b+1]/A[a][b][c]*B[a][b][c];
	      
	      B[a][b][c]=B[a+1][b+4][c+1]+A[a][b][c]/C[a][b];
	      
	      float var_a=A[a][b][c]*0.524;
	      float var_b=A[a][b+3][c+5]/0.389;
	      
	      B[a][b][c]=A[a][b][c]*B[a][b][c];
	      A[a][b][c]=A[a+3][b+2][c+3]+C[a][b];
	    }

    return 0;
}