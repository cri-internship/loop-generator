#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(660, 770, 100, "zeros");
	int ***A = create_three_dim_int(10, 10, 40, "zeros");

	for (int d = 0; d < 40; d++)
	  for (int c = 2; c < 10; c++)
	    for (int b = 2; b < 10; b++)
	      for (int a = 2; a < 10; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-2][c]/34;
	        
	       int var_a=A[a][b][c]+16;
	       int var_b=A[a-1][b][c]/35;
	      }

    return 0;
}