#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(570, 90, 800, "zeros");
	double ***B = create_three_dim_double(270, 650, 900, "zeros");

	for (int c = 0; c < 898; c++)
	  for (int b = 0; b < 650; b++)
	    for (int a = 0; a < 267; a++)
	    {
	      
	      B[a][b][c]=A[a][b][c];
	      B[a+3][b][c+2]=A[a][b][c];
	    }

    return 0;
}