#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(210, 500, 940, "random");
	float **A = create_two_dim_float(370, 530, "random");
	float ***D = create_three_dim_float(420, 430, 700, "random");
	float **B = create_two_dim_float(710, 940, "random");

	for (int c = 4; c < 695; c++)
	  for (int b = 5; b < 427; b++)
	    for (int a = 4; a < 208; a++)
	    {
	      
	      A[a][b]=A[a-4][b-3]*0.808;
	      
	      C[a][b][c]=C[a-3][b-5][c-4]*0.802;
	      
	      A[a][b]=A[a-1][b-3]-0.168;
	      
	      D[a][b][c]=D[a+2][b+3][c+5]-0.739;
	      
	      B[a][b]=0.744;
	      B[a+3][b+5]=0.524;
	      
	      C[a][b][c]=B[a][b];
	      
	      float var_a=B[a][b]/0.067;
	    }

    return 0;
}