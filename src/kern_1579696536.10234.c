#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(60, 790, "ones");
	int ***D = create_three_dim_int(390, 50, 970, "ones");
	int *C = create_one_dim_int(830, "ones");
	int *B = create_one_dim_int(470, "ones");
	int *A = create_one_dim_int(30, "ones");

	for (int d = 0; d < 785; d++)
	  for (int c = 5; c < 55; c++)
	    for (int b = 5; b < 55; b++)
	      for (int a = 5; a < 55; a++)
	      {
	        
	       B[a]=B[a-5]/6;
	        
	       C[a]=3;
	       C[a+2]=3;
	        
	       E[a][b]=3;
	       E[a+5][b+5]=6;
	      }

    return 0;
}