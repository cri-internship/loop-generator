#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(410, "zeros");
	float ***B = create_three_dim_float(640, 740, 650, "zeros");

	for (int c = 4; c < 645; c++)
	  for (int b = 1; b < 735; b++)
	    for (int a = 1; a < 405; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-1][c-3]/0.712;
	      
	      B[a][b][c]=B[a+3][b+3][c+3]*A[a];
	      
	      A[a]=A[a+5]-B[a][b][c];
	      
	      B[a][b][c]=B[a+5][b+5][c+1]/0.289;
	      
	      float var_a=A[a]-0.489;
	    }

    return 0;
}