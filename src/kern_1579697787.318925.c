#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(880, 840, 300, "random");
	float **C = create_two_dim_float(560, 590, "random");
	float *A = create_one_dim_float(620, "random");
	float *B = create_one_dim_float(200, "random");

	for (int c = 5; c < 590; c++)
	  for (int b = 5; b < 196; b++)
	    for (int a = 5; a < 196; a++)
	    {
	      
	      B[a]=B[a-2]*C[a][b]+D[a][b][c]-A[a];
	      
	      C[a][b]=0.327+D[a][b][c];
	      D[a][b][c]=C[a][b]+0.172;
	      
	      A[a]=A[a-4]-D[a][b][c]+0.617*B[a];
	      
	      C[a][b]=C[a-5][b-5]+0.456;
	      
	      C[a][b]=C[a+5][b]*D[a][b][c]-A[a]+B[a];
	      
	      B[a]=A[a]/C[a][b];
	      
	      A[a]=C[a][b]/A[a];
	      B[a]=C[a-5][b-2]*A[a]/B[a]-D[a][b][c];
	    }

    return 0;
}