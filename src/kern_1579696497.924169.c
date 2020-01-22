#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(190, "zeros");
	float ***B = create_three_dim_float(590, 670, 890, "zeros");

	for (int c = 4; c < 889; c++)
	  for (int b = 2; b < 670; b++)
	    for (int a = 5; a < 188; a++)
	    {
	      
	      A[a]=B[a][b][c];
	      A[a]=A[a]-0.123;
	      
	      A[a]=A[a-5]*B[a][b][c];
	      
	      B[a][b][c]=B[a+1][b][c+1]/0.647;
	      
	      A[a]=A[a+2]/0.243;
	      
	      B[a][b][c]=0.872;
	    }

    return 0;
}