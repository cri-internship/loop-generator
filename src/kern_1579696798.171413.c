#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(350, 820, 330, "ones");
	int **C = create_two_dim_int(620, 200, "ones");
	int ***A = create_three_dim_int(310, 710, 360, "ones");

	for (int d = 5; d < 330; d++)
	  for (int c = 5; c < 195; c++)
	    for (int b = 4; b < 306; b++)
	      for (int a = 4; a < 306; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-4][c-4]/46;
	        
	       C[a][b]=C[a][b-4]*B[a][b][c]/A[a][b][c];
	        
	       B[a][b][c]=6;
	        
	       C[a][b]=C[a][b]-B[a][b][c];
	       B[a][b][c]=C[a+5][b+5]-B[a][b][c]/46;
	        
	       A[a][b][c]=A[a][b][c]+C[a][b];
	       B[a][b][c]=A[a+4][b+1][c+2]/C[a][b];
	        
	       int var_a=A[a][b][c]+28;
	       int var_b=A[a-1][b-5][c-5]+40;
	      }

    return 0;
}