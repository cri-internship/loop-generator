#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(320, 510, 640, "ones");
	double ***A = create_three_dim_double(240, 170, 810, "ones");
	double ***C = create_three_dim_double(160, 720, 850, "ones");
	double *B = create_one_dim_double(60, "ones");
	double ***E = create_three_dim_double(810, 970, 870, "ones");

	for (int d = 5; d < 640; d++)
	  for (int c = 5; c < 510; c++)
	    for (int b = 5; b < 60; b++)
	      for (int a = 5; a < 60; a++)
	      {
	        
	       B[a]=B[a-5]*D[a][b][c]-E[a][b][c]/C[a][b][c]+A[a][b][c];
	        
	       D[a][b][c]=0.906+C[a][b][c]*E[a][b][c];
	       D[a-2][b-5][c-5]=0.609*E[a][b][c]-A[a][b][c];
	        
	       B[a]=C[a][b][c]+B[a]-D[a][b][c];
	       A[a][b][c]=C[a+3][b+2][c+5]-B[a]+D[a][b][c]/A[a][b][c]*E[a][b][c];
	      }

    return 0;
}