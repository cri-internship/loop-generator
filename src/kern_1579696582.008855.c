#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(210, 560, 830, "ones");
	float ***B = create_three_dim_float(370, 690, 460, "ones");

	for (int d = 4; d < 460; d++)
	  for (int c = 5; c < 556; c++)
	    for (int b = 5; b < 206; b++)
	      for (int a = 5; a < 206; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-5][c]+0.029;
	        
	       A[a][b][c]=A[a-1][b-3][c-2]*0.564;
	        
	       B[a][b][c]=B[a-5][b-5][c-4]-A[a][b][c];
	        
	       A[a][b][c]=A[a+4][b+4][c+1]+B[a][b][c];
	      }

    return 0;
}