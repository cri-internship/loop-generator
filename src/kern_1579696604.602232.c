#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(740, 350, "random");
	double **B = create_two_dim_double(970, 790, "random");
	double *A = create_one_dim_double(500, "random");
	double ***E = create_three_dim_double(210, 150, 520, "random");
	double ***C = create_three_dim_double(950, 570, 940, "random");

	for (int d = 0; d < 520; d++)
	  for (int c = 3; c < 149; c++)
	    for (int b = 4; b < 210; b++)
	      for (int a = 4; a < 210; a++)
	      {
	        
	       E[a][b][c]=B[a][b]*D[a][b]-C[a][b][c];
	       E[a][b+1][c]=A[a]*C[a][b][c]-D[a][b];
	        
	       D[a][b]=E[a][b][c]+B[a][b];
	       D[a-3][b-3]=C[a][b][c]*0.457;
	        
	       A[a]=0.852;
	       A[a+1]=0.167;
	        
	       double var_a=A[a]*0.174;
	       double var_b=A[a-4]*0.608;
	      }

    return 0;
}