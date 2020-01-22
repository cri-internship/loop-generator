#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(970, 470, 600, "random");
	int ***D = create_three_dim_int(500, 690, 860, "random");
	int ***E = create_three_dim_int(60, 550, 330, "random");
	int *C = create_one_dim_int(350, "random");
	int **A = create_two_dim_int(90, 200, "random");

	for (int b = 5; b < 197; b++)
	  for (int a = 4; a < 55; a++)
	  {
	    
	     A[a][b]=A[a-2][b-5]/B[a][b][a]+C[a]-E[a][b][a];
	    
	     A[a][b]=A[a+1][b+3]*25;
	    
	     C[a]=9;
	     C[a-4]=26;
	    
	     E[a][b][a]=A[a][b];
	     E[a+5][b+3][a+4]=D[a][b][a]*B[a][b][a]/18;
	  }

    return 0;
}