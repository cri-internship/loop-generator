#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(590, 530, 820, "zeros");
	int ***A = create_three_dim_int(770, 920, 460, "zeros");

	for (int d = 5; d < 458; d++)
	  for (int c = 5; c < 530; c++)
	    for (int b = 4; b < 590; b++)
	      for (int a = 4; a < 590; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b][c]/B[a][b][c];
	        
	       A[a][b][c]=A[a+4][b+5][c+2]-7;
	        
	       B[a][b][c]=25;
	       B[a-4][b-5][c-3]=A[a][b][c];
	        
	       A[a][b][c]=B[a][b][c]/36;
	       B[a][b][c]=B[a-3][b-2][c-5]/A[a][b][c];
	        
	       B[a][b][c]=A[a][b][c]+B[a][b][c];
	       A[a][b][c]=A[a][b-1][c]+B[a][b][c];
	      }

    return 0;
}