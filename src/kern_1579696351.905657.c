#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(720, "random");
	float **B = create_two_dim_float(80, 540, "random");
	float ***E = create_three_dim_float(700, 340, 710, "random");
	float *D = create_one_dim_float(490, "random");
	float **C = create_two_dim_float(390, 600, "random");

	for (int d = 0; d < 710; d++)
	  for (int c = 3; c < 340; c++)
	    for (int b = 5; b < 700; b++)
	      for (int a = 5; a < 700; a++)
	      {
	        
	       E[a][b][c]=E[a-5][b-3][c]-C[a][b]/B[a][b]+D[a]*A[a];
	      }

    return 0;
}