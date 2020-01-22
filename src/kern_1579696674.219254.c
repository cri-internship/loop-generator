#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(400, 90, "zeros");
	int ***A = create_three_dim_int(630, 230, 420, "zeros");
	int ***B = create_three_dim_int(250, 440, 290, "zeros");
	int *C = create_one_dim_int(1000, "zeros");

	for (int b = 5; b < 230; b++)
	  for (int a = 0; a < 630; a++)
	  {
	    
	     A[a][b][a]=A[a][b-5][a]-12;
	    
	     C[a]=C[a]*B[a][b][a]-D[a][b]+A[a][b][a];
	     C[a]=A[a][b][a]+D[a][b]/B[a][b][a];
	  }

    return 0;
}