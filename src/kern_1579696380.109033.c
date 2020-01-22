#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(100, "zeros");
	int ***A = create_three_dim_int(710, 760, 600, "zeros");
	int ***B = create_three_dim_int(940, 230, 730, "zeros");

	for (int d = 5; d < 595; d++)
	  for (int c = 4; c < 229; c++)
	    for (int b = 5; b < 710; b++)
	      for (int a = 5; a < 710; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b][c-5]*C[a];
	        
	       B[a][b][c]=B[a-5][b-4][c-5]+15;
	        
	       A[a][b][c]=32;
	        
	       B[a][b][c]=A[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]+B[a][b][c]*C[a];
	       C[a]=A[a][b+5][c+5]-B[a][b][c]/C[a];
	      }

    return 0;
}