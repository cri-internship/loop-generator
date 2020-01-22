#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(950, "random");
	float *D = create_one_dim_float(460, "random");
	float ***C = create_three_dim_float(350, 400, 590, "random");
	float **E = create_two_dim_float(560, 400, "random");
	float ***B = create_three_dim_float(360, 730, 790, "random");

	for (int d = 0; d < 586; d++)
	  for (int c = 0; c < 395; c++)
	    for (int b = 0; b < 347; b++)
	      for (int a = 0; a < 347; a++)
	      {
	        
	       C[a][b][c]=C[a+3][b+4][c+4]*D[a]+0.511/B[a][b][c]-A[a];
	        
	       B[a][b][c]=C[a][b][c]+0.361;
	       C[a][b][c]=C[a+3][b+5][c+3]-A[a]+0.521;
	      }

    return 0;
}