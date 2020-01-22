#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(370, 760, 670, "ones");
	float **B = create_two_dim_float(80, 330, "ones");
	float ***A = create_three_dim_float(140, 820, 370, "ones");

	for (int d = 5; d < 370; d++)
	  for (int c = 5; c < 326; c++)
	    for (int b = 3; b < 79; b++)
	      for (int a = 3; a < 79; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-2][c-4]/0.786;
	        
	       B[a][b]=A[a][b][c];
	       B[a+1][b+4]=C[a][b][c];
	        
	       A[a][b][c]=0.361;
	       A[a-3][b-4][c-4]=0.799;
	        
	       A[a][b][c]=B[a][b]+C[a][b][c];
	        
	       C[a][b][c]=0.307;
	      }

    return 0;
}