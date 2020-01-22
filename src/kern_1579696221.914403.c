#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(40, 70, 370, "zeros");
	double **B = create_two_dim_double(510, 460, "zeros");
	double ***A = create_three_dim_double(400, 980, 440, "zeros");
	double *D = create_one_dim_double(510, "zeros");

	for (int d = 4; d < 370; d++)
	  for (int c = 4; c < 70; c++)
	    for (int b = 5; b < 40; b++)
	      for (int a = 5; a < 40; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-2][c-4]*C[a][b][c]+B[a][b];
	        
	       A[a][b][c]=A[a-4][b-2][c]+0.742;
	        
	       C[a][b][c]=C[a][b][c]-D[a]+A[a][b][c]/B[a][b];
	       D[a]=C[a][b-4][c-3]*0.3+B[a][b];
	        
	       double var_a=B[a][b]*0.652;
	       double var_b=B[a-3][b]*0.725;
	        
	       A[a][b][c]=C[a][b][c]-B[a][b]/D[a]*A[a][b][c];
	       B[a][b]=C[a-2][b-4][c-1]+D[a]*B[a][b]/A[a][b][c];
	      }

    return 0;
}