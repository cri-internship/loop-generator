#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(70, 210, 260, "random");
	int *A = create_one_dim_int(550, "random");

	for (int d = 4; d < 260; d++)
	  for (int c = 2; c < 206; c++)
	    for (int b = 5; b < 66; b++)
	      for (int a = 5; a < 66; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-2][c-4]/21;
	        
	       A[a]=A[a+4]+6;
	        
	       A[a]=27;
	        
	       int var_a=B[a][b][c]+9;
	       int var_b=B[a+4][b+4][c]/34;
	        
	       A[a]=A[a]*37;
	       B[a][b][c]=A[a-1]/B[a][b][c];
	        
	       A[a]=A[a]/B[a][b][c];
	      }

    return 0;
}