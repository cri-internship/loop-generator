#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(720, 760, "ones");
	double *A = create_one_dim_double(630, "ones");
	double ***C = create_three_dim_double(450, 450, 80, "ones");

	for (int d = 2; d < 80; d++)
	  for (int c = 3; c < 450; c++)
	    for (int b = 5; b < 450; b++)
	      for (int a = 5; a < 450; a++)
	      {
	        
	       B[a][b]=B[a-5][b-3]+0.777;
	        
	       A[a]=A[a-5]*0.594;
	        
	       B[a][b]=A[a]-0.968;
	        
	       C[a][b][c]=B[a][b];
	       C[a-1][b-1][c-2]=A[a]-0.159;
	        
	       B[a][b]=B[a][b]/A[a];
	       C[a][b][c]=B[a+2][b+5]+A[a]-C[a][b][c];
	        
	       A[a]=B[a][b]*A[a]/C[a][b][c];
	       A[a]=B[a-2][b-2]/A[a];
	      }

    return 0;
}