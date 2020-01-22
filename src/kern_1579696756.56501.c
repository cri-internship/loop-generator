#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(190, 970, "random");
	float **C = create_two_dim_float(210, 620, "random");
	float **B = create_two_dim_float(260, 440, "random");
	float ***E = create_three_dim_float(780, 770, 750, "random");
	float **D = create_two_dim_float(170, 500, "random");

	for (int c = 0; c < 749; c++)
	  for (int b = 5; b < 440; b++)
	    for (int a = 3; a < 170; a++)
	    {
	      
	      A[a][b]=A[a-1][b-5]+0.114;
	      
	      B[a][b]=B[a-3][b-3]-D[a][b];
	      
	      C[a][b]=C[a-1][b-1]-B[a][b]/E[a][b][c]+A[a][b];
	      
	      E[a][b][c]=E[a][b+5][c+1]/0.546;
	      
	      D[a][b]=0.39;
	      D[a-3][b-1]=0.792;
	      
	      D[a][b]=0.634-C[a][b]/E[a][b][c]*B[a][b];
	    }

    return 0;
}