#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(400, "random");
	int ***B = create_three_dim_int(720, 680, 440, "random");
	int *A = create_one_dim_int(810, "random");

	for (int d = 1; d < 439; d++)
	  for (int c = 5; c < 676; c++)
	    for (int b = 3; b < 395; b++)
	      for (int a = 3; a < 395; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-5][c-1]+A[a];
	        
	       C[a]=C[a+5]+0;
	        
	       B[a][b][c]=B[a+3][b+4][c+1]/C[a]*C[a];
	      }

    return 0;
}