#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(290, 170, "random");

	for (int d = 3; d < 165; d++)
	  for (int c = 3; c < 285; c++)
	    for (int b = 3; b < 285; b++)
	      for (int a = 3; a < 285; a++)
	      {
	        
	       A[a][b]=A[a-3][b-3]+43;
	        
	       A[a][b]=A[a][b+4]+39;
	        
	       int var_a=A[a][b]*11;
	       int var_b=A[a+3][b+5]*46;
	      }

    return 0;
}