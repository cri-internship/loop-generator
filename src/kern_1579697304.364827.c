#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(470, "random");
	int ***B = create_three_dim_int(120, 420, 960, "random");
	int ***A = create_three_dim_int(940, 670, 60, "random");
	int **D = create_two_dim_int(740, 400, "random");

	for (int b = 4; b < 400; b++)
	  for (int a = 4; a < 465; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b][a]+11;
	    
	     A[a][b][a]=A[a+2][b+1][a+1]+20;
	    
	     C[a]=C[a+2]*23;
	    
	     C[a]=C[a+5]-22;
	    
	     D[a][b]=C[a]/B[a][b][a];
	     D[a-2][b-4]=A[a][b][a]+C[a]*B[a][b][a];
	  }

    return 0;
}