#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(770, 10, 390, "zeros");
	double ***A = create_three_dim_double(50, 100, 640, "zeros");

	for (int d = 5; d < 388; d++)
	  for (int c = 5; c < 7; c++)
	    for (int b = 3; b < 50; b++)
	      for (int a = 3; a < 50; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b][c-1]*A[a][b][c];
	        
	       B[a][b][c]=B[a-3][b-1][c-3]*0.151;
	        
	       B[a][b][c]=B[a+2][b+3][c+1]/A[a][b][c];
	        
	       B[a][b][c]=B[a+4][b+1][c+2]+0.475;
	        
	       B[a][b][c]=A[a][b][c]-B[a][b][c];
	       A[a][b][c]=A[a][b-4][c-2]*B[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]-0.943;
	       A[a][b][c]=A[a-2][b-5][c-5]-B[a][b][c];
	      }

    return 0;
}