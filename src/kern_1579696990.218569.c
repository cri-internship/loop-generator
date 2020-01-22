#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(970, 690, 510, "zeros");
	double ***A = create_three_dim_double(460, 840, 980, "zeros");
	double **B = create_two_dim_double(130, 350, "zeros");
	double *D = create_one_dim_double(130, "zeros");

	for (int d = 5; d < 510; d++)
	  for (int c = 3; c < 690; c++)
	    for (int b = 4; b < 126; b++)
	      for (int a = 4; a < 126; a++)
	      {
	        
	       D[a]=D[a+4]/0.469;
	        
	       A[a][b][c]=B[a][b]/C[a][b][c];
	       A[a+3][b][c+3]=D[a]/C[a][b][c];
	        
	       D[a]=D[a]*A[a][b][c];
	       B[a][b]=D[a-2]/C[a][b][c]+A[a][b][c]-0.529;
	        
	       A[a][b][c]=C[a][b][c]/D[a]-A[a][b][c];
	       C[a][b][c]=C[a-1][b-2][c]+A[a][b][c];
	        
	       double var_a=C[a][b][c]/0.658;
	       double var_b=C[a-4][b-3][c-5]+0.813;
	        
	       A[a][b][c]=C[a][b][c]*B[a][b];
	       D[a]=C[a-2][b-2][c-3]+A[a][b][c]*B[a][b];
	      }

    return 0;
}