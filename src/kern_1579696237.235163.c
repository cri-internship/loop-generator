#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(830, 240, 290, "zeros");
	float ***A = create_three_dim_float(690, 650, 530, "zeros");
	float *B = create_one_dim_float(700, "zeros");

	for (int d = 5; d < 286; d++)
	  for (int c = 2; c < 236; c++)
	    for (int b = 1; b < 689; b++)
	      for (int a = 1; a < 689; a++)
	      {
	        
	       B[a]=B[a-1]+0.157/C[a][b][c];
	        
	       C[a][b][c]=C[a+3][b+4][c+1]-0.549;
	        
	       A[a][b][c]=B[a]-B[a];
	       A[a+1][b+4][c+1]=B[a];
	        
	       A[a][b][c]=0.695;
	        
	       A[a][b][c]=C[a][b][c]+B[a];
	       C[a][b][c]=C[a+3][b+2][c+4]+A[a][b][c];
	      }

    return 0;
}