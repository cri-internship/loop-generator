#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(160, 640, 70, "zeros");
	float *B = create_one_dim_float(190, "zeros");

	for (int c = 3; c < 66; c++)
	  for (int b = 5; b < 636; b++)
	    for (int a = 4; a < 157; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-5][c-3]+0.204;
	      
	      B[a]=B[a+3]+0.371;
	      
	      A[a][b][c]=A[a+3][b+1][c+3]/0.794;
	      
	      A[a][b][c]=A[a+3][b+1][c+4]/0.945;
	      
	      B[a]=0.268;
	    }

    return 0;
}