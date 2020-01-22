#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(920, "zeros");
	float *B = create_one_dim_float(430, "zeros");
	float *A = create_one_dim_float(710, "zeros");
	float ***E = create_three_dim_float(660, 410, 930, "zeros");
	float ***C = create_three_dim_float(840, 730, 150, "zeros");

	for (int b = 0; b < 405; b++)
	  for (int a = 1; a < 430; a++)
	  {
	    
	     C[a][b][a]=C[a+5][b+4][a+3]+0.007;
	    
	     E[a][b][a]=E[a+5][b+5][a+3]*A[a]+B[a];
	    
	     C[a][b][a]=C[a+3][b+2][a+3]/0.674;
	    
	     A[a]=A[a+1]/0.194;
	    
	     A[a]=0.768;
	    
	     D[a]=B[a]*C[a][b][a];
	     B[a]=B[a-1]/E[a][b][a]+D[a]*C[a][b][a]-D[a];
	  }

    return 0;
}