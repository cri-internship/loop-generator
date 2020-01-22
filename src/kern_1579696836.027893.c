#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(420, 130, 620, "random");
	int **B = create_two_dim_int(880, 580, "random");

	for (int d = 2; d < 620; d++)
	  for (int c = 3; c < 126; c++)
	    for (int b = 5; b < 416; b++)
	      for (int a = 5; a < 416; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-3][c-2]-B[a][b];
	        
	       A[a][b][c]=A[a+4][b+4][c]*45;
	        
	       B[a][b]=B[a+2][b+5]*A[a][b][c];
	        
	       B[a][b]=15;
	        
	       A[a][b][c]=A[a][b][c]-B[a][b];
	       B[a][b]=A[a+1][b+3][c]-B[a][b];
	      }

    return 0;
}