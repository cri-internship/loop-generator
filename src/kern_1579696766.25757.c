#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(370, "zeros");
	float ***B = create_three_dim_float(970, 690, 190, "zeros");
	float *C = create_one_dim_float(300, "zeros");
	float **A = create_two_dim_float(650, 690, "zeros");

	for (int d = 5; d < 185; d++)
	  for (int c = 5; c < 685; c++)
	    for (int b = 3; b < 370; b++)
	      for (int a = 3; a < 370; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-5][c-5]/A[a][b]+D[a];
	        
	       B[a][b][c]=B[a+3][b+5][c+5]*C[a];
	        
	       D[a]=0.007;
	       D[a-3]=0.173;
	      }

    return 0;
}