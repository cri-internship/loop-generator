#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(170, 800, "ones");
	float ***D = create_three_dim_float(310, 850, 760, "ones");
	float ***B = create_three_dim_float(580, 970, 610, "ones");
	float *A = create_one_dim_float(610, "ones");

	for (int b = 5; b < 800; b++)
	  for (int a = 5; a < 170; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-3][a-5]-D[a][b][a];
	    
	     C[a][b]=C[a][b-5]/B[a][b][a]*0.609;
	    
	     D[a][b][a]=0.548;
	     D[a-3][b-1][a]=0.049;
	    
	     D[a][b][a]=C[a][b]-C[a][b];
	    
	     D[a][b][a]=D[a][b][a]+A[a];
	     C[a][b]=D[a-1][b-4][a-5]*C[a][b]-B[a][b][a];
	    
	     B[a][b][a]=D[a][b][a]+C[a][b]-B[a][b][a];
	     A[a]=D[a][b+1][a+4]+A[a]-B[a][b][a]/C[a][b];
	  }

    return 0;
}