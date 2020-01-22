#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(790, 600, 860, "ones");
	float *D = create_one_dim_float(950, "ones");
	float **E = create_two_dim_float(640, 420, "ones");
	float **A = create_two_dim_float(340, 100, "ones");
	float **C = create_two_dim_float(560, 430, "ones");

	for (int d = 0; d < 420; d++)
	  for (int c = 4; c < 558; c++)
	    for (int b = 4; b < 558; b++)
	      for (int a = 4; a < 558; a++)
	      {
	        
	       E[a][b]=E[a-4][b]/B[a][b][c]-C[a][b]+A[a][b]*D[a];
	        
	       B[a][b][c]=C[a][b]-E[a][b]+B[a][b][c]*E[a][b]/A[a][b];
	       A[a][b]=C[a+2][b+5]+E[a][b]/A[a][b]*D[a];
	      }

    return 0;
}