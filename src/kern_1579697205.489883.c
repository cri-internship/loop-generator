#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(60, "zeros");
	double ***C = create_three_dim_double(210, 480, 20, "zeros");
	double **B = create_two_dim_double(360, 590, "zeros");
	double **A = create_two_dim_double(560, 670, "zeros");

	for (int d = 0; d < 18; d++)
	  for (int c = 4; c < 480; c++)
	    for (int b = 5; b < 209; b++)
	      for (int a = 5; a < 209; a++)
	      {
	        
	       A[a][b]=A[a+4][b+4]*0.209;
	        
	       C[a][b][c]=0.046;
	       C[a+1][b][c+2]=0.132;
	        
	       B[a][b]=0.708;
	       B[a-5][b-2]=0.528;
	        
	       A[a][b]=B[a][b]*D[a]+C[a][b][c];
	        
	       C[a][b][c]=B[a][b]/A[a][b]-A[a][b];
	       A[a][b]=B[a-5][b-4]/D[a];
	        
	       D[a]=A[a][b]-0.434/D[a]*B[a][b];
	       B[a][b]=A[a+3][b+3]/B[a][b]+0.162-C[a][b][c];
	        
	       double var_a=A[a][b]+0.826;
	       double var_b=A[a-3][b]*0.962;
	      }

    return 0;
}