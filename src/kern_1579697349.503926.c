#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(490, 380, "random");
	double ***A = create_three_dim_double(810, 720, 880, "random");
	double ***D = create_three_dim_double(330, 10, 730, "random");
	double *E = create_one_dim_double(400, "random");
	double **B = create_two_dim_double(670, 650, "random");

	for (int d = 4; d < 725; d++)
	  for (int c = 3; c < 6; c++)
	    for (int b = 4; b < 330; b++)
	      for (int a = 4; a < 330; a++)
	      {
	        
	       D[a][b][c]=D[a-4][b-3][c-4]*B[a][b]-C[a][b];
	        
	       D[a][b][c]=C[a][b]*D[a][b][c]/A[a][b][c]-E[a];
	       C[a][b]=E[a]+A[a][b][c]/D[a][b][c]-B[a][b];
	        
	       D[a][b][c]=D[a][b+4][c+3]*E[a]+C[a][b]/B[a][b];
	        
	       D[a][b][c]=D[a][b+1][c+5]+C[a][b]*A[a][b][c];
	        
	       A[a][b][c]=0.55;
	       A[a-2][b-1][c-3]=0.441;
	        
	       B[a][b]=E[a]/0.299*A[a][b][c];
	       E[a]=E[a+5]-D[a][b][c]*B[a][b];
	      }

    return 0;
}