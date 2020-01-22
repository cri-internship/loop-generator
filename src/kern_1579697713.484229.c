#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(470, 50, "random");
	int **A = create_two_dim_int(20, 760, "random");

	for (int d = 4; d < 48; d++)
	  for (int c = 5; c < 16; c++)
	    for (int b = 5; b < 16; b++)
	      for (int a = 5; a < 16; a++)
	      {
	        
	       B[a][b]=B[a+5][b+2]/41;
	        
	       A[a][b]=A[a][b+4]-32;
	        
	       A[a][b]=37;
	        
	       B[a][b]=37;
	        
	       B[a][b]=A[a][b]*B[a][b];
	        
	       int var_a=B[a][b]+4;
	       int var_b=B[a-4][b-2]+32;
	      }

    return 0;
}