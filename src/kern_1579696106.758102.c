#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(130, 760, 350, "ones");
	int *B = create_one_dim_int(990, "ones");

	for (int d = 4; d < 346; d++)
	  for (int c = 2; c < 755; c++)
	    for (int b = 4; b < 128; b++)
	      for (int a = 4; a < 128; a++)
	      {
	        
	       A[a][b][c]=A[a][b-2][c-4]/40;
	        
	       B[a]=B[a-4]-24;
	        
	       B[a]=B[a+2]+A[a][b][c];
	        
	       A[a][b][c]=6;
	        
	       A[a][b][c]=B[a]-A[a][b][c];
	       B[a]=B[a-1]*A[a][b][c];
	        
	       int var_a=A[a][b][c]*3;
	       int var_b=A[a+2][b+4][c+2]*45;
	      }

    return 0;
}