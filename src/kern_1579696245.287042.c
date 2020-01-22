#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(870, "random");
	float ***A = create_three_dim_float(300, 60, 580, "random");

	for (int d = 5; d < 576; d++)
	  for (int c = 1; c < 59; c++)
	    for (int b = 3; b < 299; b++)
	      for (int a = 3; a < 299; a++)
	      {
	        
	       B[a]=A[a][b][c];
	       B[a]=B[a]+A[a][b][c];
	        
	       A[a][b][c]=A[a+1][b+1][c+3]+0.856;
	        
	       A[a][b][c]=A[a+1][b+1][c+4]+0.521;
	        
	       A[a][b][c]=B[a]/A[a][b][c];
	       B[a]=B[a-3]+0.317;
	      }

    return 0;
}