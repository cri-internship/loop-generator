#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(840, 250, "ones");
	int *B = create_one_dim_int(630, "ones");

	for (int d = 4; d < 248; d++)
	  for (int c = 1; c < 627; c++)
	    for (int b = 1; b < 627; b++)
	      for (int a = 1; a < 627; a++)
	      {
	        
	       B[a]=B[a+3]+4;
	        
	       A[a][b]=22;
	       A[a+3][b+2]=B[a];
	        
	       A[a][b]=34;
	        
	       B[a]=A[a][b];
	        
	       int var_a=A[a][b]*34;
	       int var_b=A[a+4][b]/11;
	        
	       B[a]=A[a][b]*B[a];
	       A[a][b]=A[a+3][b]/B[a];
	      }

    return 0;
}