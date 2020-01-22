#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(160, "random");
	int *B = create_one_dim_int(720, "random");
	int **D = create_two_dim_int(300, 400, "random");
	int *A = create_one_dim_int(910, "random");
	int **C = create_two_dim_int(970, 260, "random");

	for (int c = 3; c < 397; c++)
	  for (int b = 5; b < 297; b++)
	    for (int a = 5; a < 297; a++)
	    {
	      
	      D[a][b]=D[a-5][b-3]-37;
	      
	      A[a]=A[a+5]-B[a];
	      
	      D[a][b]=D[a+3][b+3]+47;
	    }

    return 0;
}