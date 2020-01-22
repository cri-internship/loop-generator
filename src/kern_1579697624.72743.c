#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(20, "ones");
	int ***A = create_three_dim_int(510, 680, 790, "ones");

	for (int d = 1; d < 788; d++)
	  for (int c = 5; c < 676; c++)
	    for (int b = 5; b < 17; b++)
	      for (int a = 5; a < 17; a++)
	      {
	        
	       A[a][b][c]=A[a][b-5][c-1]/18;
	        
	       B[a]=B[a-5]*27;
	        
	       B[a]=37;
	        
	       B[a]=B[a]+A[a][b][c];
	       A[a][b][c]=B[a+3]-A[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]*B[a];
	       A[a][b][c]=A[a+1][b+4][c+2]*B[a];
	      }

    return 0;
}