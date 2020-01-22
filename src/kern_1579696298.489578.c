#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(530, 780, 400, "ones");
	int **C = create_two_dim_int(180, 210, "ones");
	int ***B = create_three_dim_int(300, 600, 640, "ones");

	for (int d = 4; d < 400; d++)
	  for (int c = 5; c < 209; c++)
	    for (int b = 4; b < 180; b++)
	      for (int a = 4; a < 180; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-2][c-4]-C[a][b];
	        
	       B[a][b][c]=B[a-1][b-5][c-4]/A[a][b][c];
	        
	       B[a][b][c]=B[a+5][b+3][c]*A[a][b][c];
	        
	       C[a][b]=19;
	       C[a][b+1]=18;
	      }

    return 0;
}