#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(650, 420, 80, "ones");
	int *A = create_one_dim_int(310, "ones");
	int **C = create_two_dim_int(60, 700, "ones");

	for (int d = 5; d < 80; d++)
	  for (int c = 2; c < 420; c++)
	    for (int b = 4; b < 60; b++)
	      for (int a = 4; a < 60; a++)
	      {
	        
	       A[a]=A[a-3]-4;
	        
	       A[a]=A[a+3]*13;
	        
	       B[a][b][c]=41;
	       B[a-4][b-1][c-5]=37;
	        
	       C[a][b]=A[a];
	       C[a][b-2]=B[a][b][c]+A[a];
	      }

    return 0;
}