#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(470, 310, 630, "ones");
	float **B = create_two_dim_float(620, 560, "ones");
	float *C = create_one_dim_float(630, "ones");

	for (int d = 0; d < 628; d++)
	  for (int c = 0; c < 310; c++)
	    for (int b = 3; b < 467; b++)
	      for (int a = 3; a < 467; a++)
	      {
	        
	       C[a]=C[a-1]+A[a][b][c]/0.614;
	        
	       C[a]=C[a-3]-0.611*B[a][b];
	        
	       C[a]=C[a+5]*0.132;
	        
	       A[a][b][c]=0.684;
	       A[a+3][b][c+2]=0.429;
	        
	       B[a][b]=C[a];
	       B[a+2][b+3]=A[a][b][c]-0.079;
	      }

    return 0;
}