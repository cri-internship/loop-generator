#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(330, 800, "ones");
	int ***D = create_three_dim_int(300, 680, 880, "ones");
	int **C = create_two_dim_int(320, 220, "ones");
	int *B = create_one_dim_int(270, "ones");
	int ***A = create_three_dim_int(840, 710, 800, "ones");

	for (int c = 4; c < 800; c++)
	  for (int b = 0; b < 267; b++)
	    for (int a = 0; a < 267; a++)
	    {
	      
	      B[a]=B[a+1]+18;
	      
	      B[a]=B[a+3]*E[a][b]-14/A[a][b][c];
	      
	      E[a][b]=B[a]-D[a][b][c];
	      E[a][b-4]=B[a]+37;
	    }

    return 0;
}