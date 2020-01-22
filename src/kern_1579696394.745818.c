#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(740, 330, 540, "zeros");
	int *E = create_one_dim_int(250, "zeros");
	int **C = create_two_dim_int(270, 870, "zeros");
	int ***D = create_three_dim_int(850, 90, 330, "zeros");
	int **A = create_two_dim_int(230, 70, "zeros");

	for (int d = 2; d < 330; d++)
	  for (int c = 5; c < 70; c++)
	    for (int b = 5; b < 230; b++)
	      for (int a = 5; a < 230; a++)
	      {
	        
	       A[a][b]=A[a-2][b-1]*0;
	        
	       D[a][b][c]=D[a-5][b-5][c-2]-E[a]+3;
	        
	       E[a]=E[a+4]+28;
	      }

    return 0;
}