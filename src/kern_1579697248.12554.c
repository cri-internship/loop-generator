#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(150, 960, 90, "zeros");
	int **B = create_two_dim_int(740, 370, "zeros");

	for (int d = 5; d < 90; d++)
	  for (int c = 5; c < 370; c++)
	    for (int b = 5; b < 150; b++)
	      for (int a = 5; a < 150; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-2][c-3]+B[a][b];
	        
	       A[a][b][c]=A[a-1][b-2][c-5]*B[a][b];
	        
	       B[a][b]=9;
	       B[a-5][b-5]=12;
	        
	       int var_a=B[a][b]/39;
	       int var_b=B[a-3][b-4]+0;
	        
	       B[a][b]=B[a][b]-A[a][b][c];
	      }

    return 0;
}