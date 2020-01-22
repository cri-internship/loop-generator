#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(940, 750, 950, "zeros");
	float **B = create_two_dim_float(350, 530, "zeros");

	for (int c = 1; c < 946; c++)
	  for (int b = 3; b < 746; b++)
	    for (int a = 0; a < 935; a++)
	    {
	      
	      A[a][b][c]=B[a][b];
	      A[a+5][b+4][c+4]=0.17;
	      
	      A[a][b][c]=0.039;
	      
	      float var_a=A[a][b][c]-0.694;
	      float var_b=A[a+2][b][c+3]/0.902;
	    }

    return 0;
}