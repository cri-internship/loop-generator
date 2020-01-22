#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(350, 650, 830, "zeros");
	double **A = create_two_dim_double(740, 920, "zeros");
	double ***D = create_three_dim_double(60, 980, 460, "zeros");
	double **E = create_two_dim_double(230, 120, "zeros");
	double **B = create_two_dim_double(430, 80, "zeros");

	for (int d = 0; d < 459; d++)
	  for (int c = 0; c < 918; c++)
	    for (int b = 0; b < 56; b++)
	      for (int a = 0; a < 56; a++)
	      {
	        
	       A[a][b]=D[a][b][c]*C[a][b][c]-B[a][b]/E[a][b];
	       E[a][b]=A[a][b]-E[a][b]/D[a][b][c]+B[a][b]*C[a][b][c];
	        
	       A[a][b]=A[a+1][b+2]-C[a][b][c]+D[a][b][c]*E[a][b];
	        
	       D[a][b][c]=0.762;
	       D[a+4][b+5][c+1]=0.036;
	      }

    return 0;
}