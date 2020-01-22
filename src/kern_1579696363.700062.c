#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(200, 830, 180, "ones");
	int **B = create_two_dim_int(240, 630, "ones");
	int **C = create_two_dim_int(630, 430, "ones");

	for (int d = 5; d < 430; d++)
	  for (int c = 5; c < 626; c++)
	    for (int b = 5; b < 626; b++)
	      for (int a = 5; a < 626; a++)
	      {
	        
	       C[a][b]=C[a-3][b]+46;
	        
	       C[a][b]=C[a+4][b]*7;
	        
	       B[a][b]=C[a][b]/B[a][b];
	       C[a][b]=C[a-3][b-5]*A[a][b][c];
	      }

    return 0;
}