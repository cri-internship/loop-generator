#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(730, 780, 330, "zeros");
	double **D = create_two_dim_double(460, 830, "zeros");
	double ***C = create_three_dim_double(250, 900, 500, "zeros");
	double *E = create_one_dim_double(580, "zeros");
	double *A = create_one_dim_double(500, "zeros");

	for (int d = 5; d < 325; d++)
	  for (int c = 3; c < 776; c++)
	    for (int b = 5; b < 250; b++)
	      for (int a = 5; a < 250; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-3][c-1]+0.11;
	        
	       D[a][b]=0.411;
	       D[a+5][b+2]=0.856;
	        
	       double var_a=B[a][b][c]+0.258;
	       double var_b=B[a+4][b+4][c+5]+0.071;
	        
	       E[a]=D[a][b]+A[a];
	       A[a]=D[a][b-1]-C[a][b][c]+E[a];
	        
	       double var_c=C[a][b][c]+0.231;
	       double var_d=C[a-5][b-1][c-5]*0.056;
	      }

    return 0;
}