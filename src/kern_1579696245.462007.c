#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(220, "zeros");
	double **D = create_two_dim_double(70, 840, "zeros");
	double **B = create_two_dim_double(710, 760, "zeros");
	double ***A = create_three_dim_double(990, 100, 160, "zeros");

	for (int d = 0; d < 155; d++)
	  for (int c = 2; c < 100; c++)
	    for (int b = 3; b < 220; b++)
	      for (int a = 3; a < 220; a++)
	      {
	        
	       C[a]=C[a-3]*0.104;
	        
	       A[a][b][c]=A[a+2][b][c+5]*0.53;
	        
	       B[a][b]=0.541;
	       B[a+4][b+2]=0.023;
	        
	       A[a][b][c]=B[a][b]*C[a]/A[a][b][c]+D[a][b];
	       C[a]=B[a-1][b-2]+0.926/C[a]*A[a][b][c];
	      }

    return 0;
}