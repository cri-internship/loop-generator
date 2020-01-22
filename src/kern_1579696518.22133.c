#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(580, 840, 280, "random");
	int *D = create_one_dim_int(30, "random");
	int **B = create_two_dim_int(720, 980, "random");
	int ***A = create_three_dim_int(630, 750, 140, "random");

	for (int c = 3; c < 280; c++)
	  for (int b = 3; b < 840; b++)
	    for (int a = 0; a < 580; a++)
	    {
	      
	      C[a][b][c]=C[a][b-3][c-3]-19+D[a]*B[a][b];
	      
	      B[a][b]=C[a][b][c]*D[a]+C[a][b][c];
	      B[a+2][b]=A[a][b][c]/C[a][b][c]+D[a];
	    }

    return 0;
}