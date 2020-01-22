#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(960, 20, "random");
	int **E = create_two_dim_int(80, 990, "random");
	int *D = create_one_dim_int(440, "random");
	int **B = create_two_dim_int(440, 740, "random");
	int ***A = create_three_dim_int(860, 990, 420, "random");

	for (int c = 3; c < 19; c++)
	  for (int b = 4; b < 75; b++)
	    for (int a = 4; a < 75; a++)
	    {
	      
	      C[a][b]=C[a-4][b]/E[a][b];
	      
	      E[a][b]=E[a-2][b-3]/42;
	      
	      C[a][b]=C[a+3][b+1]+D[a]*B[a][b]/35-B[a][b];
	      
	      E[a][b]=E[a+5][b]+46;
	      
	      C[a][b]=B[a][b]/E[a][b];
	      A[a][b][c]=B[a-3][b-2]+A[a][b][c]/D[a]-C[a][b]*E[a][b];
	    }

    return 0;
}