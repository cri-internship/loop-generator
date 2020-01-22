#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(710, "zeros");
	float ***A = create_three_dim_float(430, 500, 790, "zeros");
	float **C = create_two_dim_float(440, 430, "zeros");
	float ***B = create_three_dim_float(280, 840, 800, "zeros");
	float *D = create_one_dim_float(610, "zeros");

	for (int b = 5; b < 426; b++)
	  for (int a = 5; a < 275; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-1][a-1]*0.905;
	    
	     A[a][b][a]=A[a-4][b-5][a-5]/E[a];
	    
	     E[a]=E[a+4]*D[a]-C[a][b];
	    
	     B[a][b][a]=A[a][b][a]*C[a][b]/0.588;
	     B[a+5][b+5][a]=E[a];
	    
	     C[a][b]=0.128;
	     C[a+2][b+4]=0.307;
	    
	     B[a][b][a]=C[a][b]+E[a];
	    
	     float var_a=A[a][b][a]/0.954;
	     float var_b=A[a-1][b-3][a]+0.746;
	  }

    return 0;
}