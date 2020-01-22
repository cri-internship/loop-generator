#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(910, 750, 340, "ones");
	double ***B = create_three_dim_double(180, 560, 200, "ones");

	for (int d = 4; d < 196; d++)
	  for (int c = 5; c < 555; c++)
	    for (int b = 4; b < 178; b++)
	      for (int a = 4; a < 178; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-5][c-4]-A[a][b][c];
	        
	       A[a][b][c]=A[a-1][b-4][c]/B[a][b][c];
	        
	       B[a][b][c]=B[a+2][b+5][c+3]+0.153;
	        
	       B[a][b][c]=B[a][b+4][c+4]-0.248;
	        
	       A[a][b][c]=A[a][b+5][c+3]*0.863;
	      }

    return 0;
}