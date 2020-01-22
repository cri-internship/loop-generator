#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(690, 650, 360, "random");
	int ***C = create_three_dim_int(210, 250, 770, "random");
	int *A = create_one_dim_int(190, "random");

	for (int d = 5; d < 355; d++)
	  for (int c = 1; c < 250; c++)
	    for (int b = 2; b < 185; b++)
	      for (int a = 2; a < 185; a++)
	      {
	        
	       B[a][b][c]=B[a+3][b+4][c]-50;
	        
	       A[a]=A[a+5]*B[a][b][c];
	        
	       B[a][b][c]=B[a+5][b+2][c+5]-4;
	        
	       C[a][b][c]=18;
	       C[a-2][b-1][c-5]=38-B[a][b][c];
	        
	       A[a]=B[a][b][c]/C[a][b][c]-C[a][b][c];
	       C[a][b][c]=B[a+5][b+1][c+2]-36*A[a];
	      }

    return 0;
}