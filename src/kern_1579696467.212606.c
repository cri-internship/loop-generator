#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(830, "zeros");
	float ***A = create_three_dim_float(310, 950, 950, "zeros");
	float **C = create_two_dim_float(370, 330, "zeros");
	float ***B = create_three_dim_float(480, 280, 1000, "zeros");

	for (int b = 3; b < 280; b++)
	  for (int a = 5; a < 307; a++)
	  {
	    
	     C[a][b]=C[a-5][b-3]-D[a];
	    
	     D[a]=B[a][b][a]-0.822;
	     B[a][b][a]=A[a][b][a]*C[a][b]+D[a];
	    
	     A[a][b][a]=A[a][b][a+2]/B[a][b][a]-B[a][b][a];
	    
	     B[a][b][a]=B[a+5][b][a]+0.618;
	    
	     float var_a=A[a][b][a]+0.761;
	     float var_b=A[a+3][b][a+1]-0.526;
	  }

    return 0;
}