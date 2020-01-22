#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(270, 770, 720, "zeros");
	float ***C = create_three_dim_float(590, 280, 170, "zeros");
	float *B = create_one_dim_float(260, "zeros");

	for (int d = 5; d < 169; d++)
	  for (int c = 3; c < 278; c++)
	    for (int b = 5; b < 260; b++)
	      for (int a = 5; a < 260; a++)
	      {
	        
	       B[a]=B[a-5]*0.407;
	        
	       B[a]=B[a-3]-C[a][b][c]+A[a][b][c];
	        
	       C[a][b][c]=C[a+1][b+2][c+1]-B[a];
	        
	       C[a][b][c]=0.793;
	        
	       A[a][b][c]=B[a];
	       A[a][b-3][c-5]=0.341+B[a];
	      }

    return 0;
}