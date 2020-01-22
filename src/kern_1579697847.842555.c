#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(640, "random");
	double ***C = create_three_dim_double(930, 720, 140, "random");
	double ***B = create_three_dim_double(330, 420, 840, "random");
	double *A = create_one_dim_double(610, "random");

	for (int d = 4; d < 140; d++)
	  for (int c = 2; c < 720; c++)
	    for (int b = 1; b < 609; b++)
	      for (int a = 1; a < 609; a++)
	      {
	        
	       A[a]=A[a+1]/D[a];
	        
	       C[a][b][c]=C[a][b][c]*A[a];
	       D[a]=C[a-1][b-2][c-4]/B[a][b][c]*D[a]+A[a];
	      }

    return 0;
}