#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(420, "random");
	float *B = create_one_dim_float(650, "random");
	float ***A = create_three_dim_float(310, 700, 890, "random");
	float **D = create_two_dim_float(420, 600, "random");
	float *E = create_one_dim_float(70, "random");

	for (int d = 0; d < 890; d++)
	  for (int c = 4; c < 595; c++)
	    for (int b = 5; b < 310; b++)
	      for (int a = 5; a < 310; a++)
	      {
	        
	       C[a]=C[a-5]*0.253;
	        
	       D[a][b]=D[a-1][b-4]/0.059;
	        
	       C[a]=C[a+5]/B[a]+E[a]*A[a][b][c]-D[a][b];
	        
	       D[a][b]=0.353;
	        
	       B[a]=A[a][b][c]*C[a]-C[a]/D[a][b]+E[a];
	      }

    return 0;
}