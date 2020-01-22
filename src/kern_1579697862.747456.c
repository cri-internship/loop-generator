#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(690, 500, 700, "ones");
	double *A = create_one_dim_double(180, "ones");

	for (int d = 1; d < 695; d++)
	  for (int c = 4; c < 495; c++)
	    for (int b = 5; b < 175; b++)
	      for (int a = 5; a < 175; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-4][c-1]*0.96;
	        
	       A[a]=A[a+5]*0.285;
	        
	       B[a][b][c]=B[a+1][b+5][c+2]*A[a];
	        
	       B[a][b][c]=B[a+2][b+2][c+5]/A[a];
	        
	       A[a]=A[a]-B[a][b][c];
	       B[a][b][c]=A[a-5]-B[a][b][c];
	        
	       B[a][b][c]=A[a]/B[a][b][c];
	       A[a]=A[a+3]+B[a][b][c];
	      }

    return 0;
}