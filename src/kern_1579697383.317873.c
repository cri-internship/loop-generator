#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(740, "random");
	double *D = create_one_dim_double(160, "random");
	double ***B = create_three_dim_double(780, 80, 1000, "random");
	double ***C = create_three_dim_double(760, 190, 480, "random");

	for (int d = 1; d < 480; d++)
	  for (int c = 5; c < 80; c++)
	    for (int b = 3; b < 156; b++)
	      for (int a = 3; a < 156; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-5][c]*A[a]-C[a][b][c];
	        
	       D[a]=D[a+1]-0.741;
	        
	       C[a][b][c]=B[a][b][c]*D[a]/A[a];
	       C[a-2][b-4][c-1]=A[a]*B[a][b][c];
	        
	       D[a]=D[a]-C[a][b][c];
	       B[a][b][c]=D[a+4]*A[a]/0.386;
	      }

    return 0;
}