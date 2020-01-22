#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(530, 720, "random");
	int ***B = create_three_dim_int(70, 610, 30, "random");

	for (int c = 0; c < 25; c++)
	  for (int b = 0; b < 605; b++)
	    for (int a = 0; a < 66; a++)
	    {
	      
	      B[a][b][c]=B[a+2][b][c+5]+A[a][b];
	      
	      A[a][b]=A[a+2][b+2]/49;
	      
	      B[a][b][c]=B[a+3][b+5][c+4]-24;
	      
	      B[a][b][c]=B[a+4][b][c+3]*45;
	    }

    return 0;
}