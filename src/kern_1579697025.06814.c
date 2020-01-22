#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(200, 920, "ones");
	int ***A = create_three_dim_int(580, 230, 510, "ones");

	for (int d = 2; d < 510; d++)
	  for (int c = 3; c < 230; c++)
	    for (int b = 5; b < 195; b++)
	      for (int a = 5; a < 195; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-1][c-2]-5;
	        
	       int var_a=B[a][b]/24;
	       int var_b=B[a+5][b+2]*5;
	        
	       int var_c=B[a][b]-17;
	       int var_d=B[a-3][b-3]+0;
	        
	       B[a][b]=B[a][b]/A[a][b][c];
	       A[a][b][c]=B[a-3][b]+A[a][b][c];
	      }

    return 0;
}