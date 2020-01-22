#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(460, 130, 270, "random");
	int **B = create_two_dim_int(890, 1000, "random");
	int **A = create_two_dim_int(650, 660, "random");
	int **E = create_two_dim_int(830, 110, "random");
	int ***D = create_three_dim_int(550, 700, 470, "random");

	for (int c = 0; c < 269; c++)
	  for (int b = 2; b < 125; b++)
	    for (int a = 0; a < 458; a++)
	    {
	      
	      A[a][b]=A[a][b-2]-C[a][b][c]+D[a][b][c]/E[a][b]*B[a][b];
	      
	      C[a][b][c]=C[a+2][b+5][c+1]-8;
	    }

    return 0;
}