#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(980, 330, 360, "zeros");
	double **D = create_two_dim_double(720, 190, "zeros");
	double ***A = create_three_dim_double(650, 550, 870, "zeros");
	double **B = create_two_dim_double(360, 170, "zeros");

	for (int d = 4; d < 357; d++)
	  for (int c = 4; c < 167; c++)
	    for (int b = 5; b < 359; b++)
	      for (int a = 5; a < 359; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b-4][c-4]/0.805;
	        
	       B[a][b]=B[a-5][b-3]*D[a][b]-C[a][b][c]+A[a][b][c];
	        
	       double var_a=C[a][b][c]+0.504;
	       double var_b=C[a-2][b-1][c-2]+0.367;
	        
	       A[a][b][c]=C[a][b][c]+B[a][b]-B[a][b]/A[a][b][c];
	       C[a][b][c]=C[a][b+3][c+3]+D[a][b]-B[a][b]*A[a][b][c];
	        
	       double var_c=A[a][b][c]/0.692;
	       double var_d=A[a][b-3][c-1]-0.932;
	        
	       double var_e=B[a][b]+0.686;
	       double var_f=B[a+1][b+3]+0.866;
	        
	       D[a][b]=A[a][b][c]/B[a][b]*C[a][b][c]-D[a][b];
	       B[a][b]=A[a+4][b+2][c+4]-C[a][b][c]/D[a][b]+0.915;
	      }

    return 0;
}