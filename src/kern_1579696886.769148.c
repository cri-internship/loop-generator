#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(100, 980, "ones");
	int *A = create_one_dim_int(360, "ones");

	for (int d = 2; d < 976; d++)
	  for (int c = 3; c < 95; c++)
	    for (int b = 3; b < 95; b++)
	      for (int a = 3; a < 95; a++)
	      {
	        
	       B[a][b]=B[a-3][b-2]+13;
	        
	       A[a]=A[a-2]/13;
	        
	       B[a][b]=B[a][b+1]*46;
	        
	       A[a]=A[a+4]*B[a][b];
	        
	       B[a][b]=B[a+5][b+2]*A[a];
	        
	       int var_a=A[a]-26;
	       int var_b=A[a-1]+24;
	      }

    return 0;
}