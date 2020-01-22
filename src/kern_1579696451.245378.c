#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(530, 880, 190, "random");
	double **B = create_two_dim_double(940, 80, "random");
	double *C = create_one_dim_double(760, "random");
	double **A = create_two_dim_double(40, 360, "random");

	for (int d = 0; d < 186; d++)
	  for (int c = 2; c < 80; c++)
	    for (int b = 2; b < 525; b++)
	      for (int a = 2; a < 525; a++)
	      {
	        
	       B[a][b]=B[a-2][b]/C[a]+A[a][b];
	        
	       C[a]=C[a+3]-0.361;
	        
	       D[a][b][c]=D[a+5][b][c+1]*0.16;
	        
	       A[a][b]=B[a][b]/D[a][b][c]*C[a]+D[a][b][c];
	       B[a][b]=B[a-1][b-2]/A[a][b]+D[a][b][c]*C[a];
	        
	       C[a]=D[a][b][c]/B[a][b];
	       D[a][b][c]=D[a+3][b+5][c+4]-B[a][b]*A[a][b]/C[a];
	      }

    return 0;
}