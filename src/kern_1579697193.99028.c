#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(80, 670, "random");
	float ***E = create_three_dim_float(100, 90, 480, "random");
	float *D = create_one_dim_float(320, "random");
	float ***B = create_three_dim_float(650, 430, 760, "random");
	float *C = create_one_dim_float(890, "random");

	for (int d = 4; d < 480; d++)
	  for (int c = 5; c < 90; c++)
	    for (int b = 4; b < 100; b++)
	      for (int a = 4; a < 100; a++)
	      {
	        
	       D[a]=B[a][b][c]+E[a][b][c];
	       B[a][b][c]=D[a]*A[a][b]-C[a]/A[a][b]+E[a][b][c];
	        
	       E[a][b][c]=0.368;
	       E[a-4][b-5][c-4]=0.053;
	      }

    return 0;
}