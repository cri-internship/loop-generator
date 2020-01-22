#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(440, 590, 890, "random");
	float *A = create_one_dim_float(30, "random");
	float ***D = create_three_dim_float(870, 860, 310, "random");
	float **C = create_two_dim_float(840, 130, "random");
	float **E = create_two_dim_float(310, 790, "random");

	for (int b = 1; b < 125; b++)
	  for (int a = 3; a < 28; a++)
	  {
	    
	     C[a][b]=C[a][b-1]*A[a]/B[a][b][a];
	    
	     D[a][b][a]=D[a][b-1][a-1]+E[a][b];
	    
	     A[a]=A[a+2]/0.904;
	    
	     B[a][b][a]=B[a+5][b+2][a+3]*D[a][b][a];
	    
	     float var_a=E[a][b]+0.014;
	     float var_b=E[a+3][b+3]+0.309;
	    
	     B[a][b][a]=C[a][b]+0.415/D[a][b][a]*E[a][b]-B[a][b][a];
	     D[a][b][a]=C[a+5][b+5]+0.778-E[a][b];
	    
	     E[a][b]=C[a][b]-A[a]+0.551;
	     C[a][b]=C[a-3][b-1]/B[a][b][a]*A[a]-E[a][b]+D[a][b][a];
	  }

    return 0;
}