#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(430, 230, "ones");
	float ***A = create_three_dim_float(450, 620, 980, "ones");

	for (int c = 4; c < 975; c++)
	  for (int b = 5; b < 225; b++)
	    for (int a = 5; a < 428; a++)
	    {
	      
	      B[a][b]=B[a-5][b-5]*0.98;
	      
	      A[a][b][c]=A[a+3][b+2][c+5]*B[a][b];
	      
	      B[a][b]=B[a+2][b+5]+0.051;
	      
	      A[a][b][c]=A[a+3][b+1][c+3]/0.544;
	      
	      float var_a=A[a][b][c]-0.776;
	      float var_b=A[a-1][b-1][c-4]+0.384;
	      
	      A[a][b][c]=B[a][b]/A[a][b][c];
	      B[a][b]=B[a-2][b]-A[a][b][c];
	    }

    return 0;
}