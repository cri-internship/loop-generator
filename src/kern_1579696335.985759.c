#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(990, 100, "random");
	int *D = create_one_dim_int(490, "random");
	int **C = create_two_dim_int(690, 670, "random");
	int ***B = create_three_dim_int(40, 480, 330, "random");
	int *E = create_one_dim_int(550, "random");

	for (int c = 0; c < 329; c++)
	  for (int b = 0; b < 98; b++)
	    for (int a = 0; a < 35; a++)
	    {
	      
	      B[a][b][c]=26;
	      B[a+5][b][c+1]=16;
	      
	      A[a][b]=33*E[a]+B[a][b][c];
	      A[a+5][b+2]=9-E[a]+B[a][b][c]*D[a];
	      
	      C[a][b]=25;
	      C[a+2][b+2]=17;
	    }

    return 0;
}