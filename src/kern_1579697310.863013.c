#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(300, 180, "random");
	int *C = create_one_dim_int(850, "random");
	int ***A = create_three_dim_int(580, 190, 700, "random");

	for (int c = 0; c < 179; c++)
	  for (int b = 0; b < 298; b++)
	    for (int a = 0; a < 298; a++)
	    {
	      
	      B[a][b]=B[a+2][b+1]+13;
	      
	      C[a]=C[a+5]/8+B[a][b];
	      
	      C[a]=C[a+1]*A[a][b][c];
	    }

    return 0;
}