#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(200, 630, 250, "ones");
	int *B = create_one_dim_int(900, "ones");

	for (int d = 0; d < 245; d++)
	  for (int c = 0; c < 625; c++)
	    for (int b = 5; b < 197; b++)
	      for (int a = 5; a < 197; a++)
	      {
	        
	       B[a]=B[a-5]+A[a][b][c];
	        
	       B[a]=B[a+1]+40;
	        
	       B[a]=B[a+3]-33;
	        
	       A[a][b][c]=A[a+2][b+5][c]*B[a];
	        
	       A[a][b][c]=5;
	      }

    return 0;
}