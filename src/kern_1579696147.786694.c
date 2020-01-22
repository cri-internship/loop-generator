#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(940, 90, 600, "ones");
	float ***A = create_three_dim_float(460, 310, 900, "ones");

	for (int d = 5; d < 595; d++)
	  for (int c = 2; c < 85; c++)
	    for (int b = 4; b < 457; b++)
	      for (int a = 4; a < 457; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-2][c-5]/B[a][b][c];
	        
	       A[a][b][c]=A[a+1][b+5][c]-0.33;
	        
	       A[a][b][c]=A[a+2][b+5][c+1]*0.507;
	        
	       B[a][b][c]=0.362;
	       B[a+1][b+5][c+5]=0.324;
	        
	       A[a][b][c]=B[a][b][c]+A[a][b][c];
	       B[a][b][c]=B[a][b-2][c]/A[a][b][c];
	      }

    return 0;
}