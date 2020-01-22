#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(170, 30, 70, "random");
	double ***B = create_three_dim_double(420, 80, 290, "random");
	double **A = create_two_dim_double(900, 70, "random");

	for (int d = 5; d < 70; d++)
	  for (int c = 5; c < 25; c++)
	    for (int b = 4; b < 168; b++)
	      for (int a = 4; a < 168; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-2][c-2]/0.63;
	        
	       B[a][b][c]=B[a-1][b-4][c-1]/A[a][b];
	        
	       A[a][b]=0.88;
	       A[a-3][b-4]=0.033;
	        
	       C[a][b][c]=B[a][b][c];
	       C[a+2][b+5][c]=B[a][b][c];
	        
	       B[a][b][c]=A[a][b]-B[a][b][c]+C[a][b][c];
	       A[a][b]=A[a+4][b+3]/B[a][b][c];
	        
	       C[a][b][c]=C[a][b][c]+B[a][b][c];
	       B[a][b][c]=C[a][b-5][c-1]/B[a][b][c]*A[a][b];
	      }

    return 0;
}