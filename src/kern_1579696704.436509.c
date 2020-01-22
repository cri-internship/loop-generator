#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(880, "random");
	double ***C = create_three_dim_double(260, 140, 700, "random");
	double *A = create_one_dim_double(950, "random");
	double **D = create_two_dim_double(930, 620, "random");

	for (int d = 4; d < 696; d++)
	  for (int c = 5; c < 136; c++)
	    for (int b = 2; b < 258; b++)
	      for (int a = 2; a < 258; a++)
	      {
	        
	       D[a][b]=D[a][b-5]-0.644;
	        
	       D[a][b]=D[a-1][b-4]+B[a]-C[a][b][c];
	        
	       C[a][b][c]=C[a+2][b+2][c+2]*A[a]-D[a][b]+A[a];
	        
	       C[a][b][c]=C[a+2][b+4][c+4]/0.636;
	        
	       C[a][b][c]=C[a+2][b][c+4]*D[a][b]+B[a]/A[a];
	        
	       A[a]=D[a][b]*C[a][b][c];
	       A[a]=C[a][b][c]-B[a]/D[a][b];
	      }

    return 0;
}