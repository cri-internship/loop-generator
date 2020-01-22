#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(170, 930, "zeros");
	double **B = create_two_dim_double(170, 30, "zeros");
	double ***E = create_three_dim_double(610, 620, 320, "zeros");
	double ***D = create_three_dim_double(840, 430, 210, "zeros");
	double **C = create_two_dim_double(700, 950, "zeros");

	for (int d = 0; d < 207; d++)
	  for (int c = 4; c < 26; c++)
	    for (int b = 3; b < 169; b++)
	      for (int a = 3; a < 169; a++)
	      {
	        
	       B[a][b]=B[a+1][b+4]+D[a][b][c];
	        
	       A[a][b]=C[a][b];
	       A[a][b-2]=B[a][b]*E[a][b][c];
	        
	       C[a][b]=A[a][b]/E[a][b][c]+A[a][b]*D[a][b][c];
	       C[a-3][b-4]=B[a][b]*E[a][b][c]/A[a][b]+D[a][b][c];
	        
	       B[a][b]=D[a][b][c]-E[a][b][c]+A[a][b]/C[a][b]*B[a][b];
	       E[a][b][c]=D[a][b][c+3]*E[a][b][c];
	        
	       A[a][b]=B[a][b]*C[a][b]/A[a][b]-D[a][b][c]+E[a][b][c];
	       D[a][b][c]=B[a-3][b]-A[a][b]*E[a][b][c]+D[a][b][c];
	      }

    return 0;
}