#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(490, 340, "zeros");
	double ***E = create_three_dim_double(810, 380, 350, "zeros");
	double ***D = create_three_dim_double(460, 490, 140, "zeros");
	double **B = create_two_dim_double(400, 700, "zeros");
	double **A = create_two_dim_double(190, 670, "zeros");

	for (int d = 4; d < 335; d++)
	  for (int c = 5; c < 190; c++)
	    for (int b = 5; b < 190; b++)
	      for (int a = 5; a < 190; a++)
	      {
	        
	       A[a][b]=A[a-3][b-2]-0.178;
	        
	       B[a][b]=B[a+1][b+3]+0.923;
	        
	       B[a][b]=B[a+4][b+5]+0.936;
	        
	       D[a][b][c]=C[a][b]-B[a][b]*D[a][b][c]+A[a][b]/E[a][b][c];
	       C[a][b]=C[a+2][b+5]*B[a][b]/E[a][b][c]-D[a][b][c];
	      }

    return 0;
}