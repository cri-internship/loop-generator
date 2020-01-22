#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(470, 840, "zeros");
	double **A = create_two_dim_double(360, 510, "zeros");
	double ***C = create_three_dim_double(80, 730, 900, "zeros");
	double **B = create_two_dim_double(620, 140, "zeros");
	double *E = create_one_dim_double(240, "zeros");

	for (int d = 5; d < 900; d++)
	  for (int c = 4; c < 510; c++)
	    for (int b = 4; b < 80; b++)
	      for (int a = 4; a < 80; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-1][c-4]+B[a][b]-A[a][b]/E[a]*D[a][b];
	        
	       C[a][b][c]=C[a-4][b-1][c-5]/A[a][b]-D[a][b];
	        
	       E[a]=0.776;
	       E[a-2]=0.26;
	        
	       E[a]=A[a][b]-C[a][b][c]+C[a][b][c]*B[a][b];
	       D[a][b]=A[a][b-4]-C[a][b][c]+D[a][b]*E[a]/B[a][b];
	        
	       double var_a=E[a]+0.351;
	       double var_b=E[a+5]*0.705;
	      }

    return 0;
}