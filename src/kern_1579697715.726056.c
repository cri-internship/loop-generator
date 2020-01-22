#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(280, 720, 150, "ones");
	int **B = create_two_dim_int(550, 400, "ones");
	int **D = create_two_dim_int(80, 890, "ones");
	int **C = create_two_dim_int(420, 320, "ones");
	int **A = create_two_dim_int(230, 420, "ones");

	for (int c = 4; c < 320; c++)
	  for (int b = 5; b < 77; b++)
	    for (int a = 5; a < 77; a++)
	    {
	      
	      A[a][b]=A[a-5][b-2]/33;
	      
	      C[a][b]=C[a][b-4]*A[a][b]+E[a][b][c]-B[a][b]/D[a][b];
	      
	      D[a][b]=D[a+3][b+5]+C[a][b]*A[a][b]-C[a][b];
	    }

    return 0;
}