#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(510, 620, 330, "random");
	float **A = create_two_dim_float(950, 370, "random");
	float ***C = create_three_dim_float(880, 470, 940, "random");
	float *D = create_one_dim_float(260, "random");
	float *E = create_one_dim_float(710, "random");

	for (int d = 2; d < 940; d++)
	  for (int c = 5; c < 470; c++)
	    for (int b = 5; b < 258; b++)
	      for (int a = 5; a < 258; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-5][c-2]-E[a]+D[a];
	        
	       D[a]=D[a+2]-C[a][b][c]/B[a][b][c]*A[a][b];
	      }

    return 0;
}