#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(20, 850, 420, "zeros");
	double ***B = create_three_dim_double(480, 810, 960, "zeros");
	double ***E = create_three_dim_double(790, 810, 670, "zeros");
	double ***A = create_three_dim_double(530, 110, 220, "zeros");
	double **D = create_two_dim_double(130, 200, "zeros");

	for (int d = 2; d < 665; d++)
	  for (int c = 4; c < 200; c++)
	    for (int b = 3; b < 130; b++)
	      for (int a = 3; a < 130; a++)
	      {
	        
	       B[a][b][c]=B[a][b-4][c-2]+A[a][b][c]-D[a][b]*C[a][b][c];
	        
	       D[a][b]=D[a-2][b-1]+0.972;
	        
	       E[a][b][c]=E[a+3][b+3][c+3]+B[a][b][c];
	        
	       E[a][b][c]=0.556;
	      }

    return 0;
}