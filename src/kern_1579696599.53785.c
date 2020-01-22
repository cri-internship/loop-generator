#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(970, 240, "random");
	float *C = create_one_dim_float(420, "random");
	float ***E = create_three_dim_float(690, 150, 930, "random");
	float ***A = create_three_dim_float(550, 20, 30, "random");
	float **D = create_two_dim_float(990, 770, "random");

	for (int d = 5; d < 30; d++)
	  for (int c = 1; c < 20; c++)
	    for (int b = 5; b < 420; b++)
	      for (int a = 5; a < 420; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-1][c-5]+D[a][b]/E[a][b][c];
	        
	       C[a]=C[a-5]/0.576;
	        
	       C[a]=B[a][b]-A[a][b][c]+D[a][b]*E[a][b][c];
	      }

    return 0;
}