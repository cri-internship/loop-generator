#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(830, 140, 960, "zeros");
	int **A = create_two_dim_int(950, 640, "zeros");

	for (int d = 1; d < 955; d++)
	  for (int c = 4; c < 139; c++)
	    for (int b = 5; b < 828; b++)
	      for (int a = 5; a < 828; a++)
	      {
	        
	       A[a][b]=A[a-5][b]/4;
	        
	       B[a][b][c]=B[a-4][b-1][c-1]-10;
	        
	       A[a][b]=A[a-3][b-1]+B[a][b][c];
	        
	       A[a][b]=A[a][b+5]+42;
	        
	       A[a][b]=A[a][b+4]*35;
	        
	       B[a][b][c]=45;
	        
	       A[a][b]=B[a][b][c]+A[a][b];
	       B[a][b][c]=B[a+2][b+1][c+5]/A[a][b];
	      }

    return 0;
}