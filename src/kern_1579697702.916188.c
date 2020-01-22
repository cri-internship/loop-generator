#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(220, 470, 160, "random");
	int *B = create_one_dim_int(510, "random");
	int *E = create_one_dim_int(80, "random");
	int **C = create_two_dim_int(660, 350, "random");
	int **D = create_two_dim_int(910, 380, "random");

	for (int c = 2; c < 160; c++)
	  for (int b = 4; b < 350; b++)
	    for (int a = 5; a < 220; a++)
	    {
	      
	      C[a][b]=C[a-5][b]*E[a]/D[a][b]+B[a];
	      
	      D[a][b]=D[a+4][b]-29;
	      
	      D[a][b]=A[a][b][c]*C[a][b]+B[a]/E[a];
	      E[a]=A[a-2][b-4][c-2]*D[a][b]-E[a];
	    }

    return 0;
}