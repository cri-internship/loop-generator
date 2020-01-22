#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(210, 770, "random");

	for (int d = 4; d < 765; d++)
	  for (int c = 5; c < 210; c++)
	    for (int b = 5; b < 210; b++)
	      for (int a = 5; a < 210; a++)
	      {
	        
	       A[a][b]=30;
	       A[a][b+5]=8;
	        
	       int var_a=A[a][b]-45;
	       int var_b=A[a-5][b]+29;
	        
	       int var_c=A[a][b]/8;
	       int var_d=A[a-1][b-4]*8;
	      }

    return 0;
}