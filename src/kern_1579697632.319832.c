#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(930, 130, "random");
	int **B = create_two_dim_int(850, 1000, "random");
	int ***D = create_three_dim_int(350, 270, 1000, "random");
	int **C = create_two_dim_int(570, 30, "random");

	for (int c = 0; c < 25; c++)
	  for (int b = 0; b < 565; b++)
	    for (int a = 0; a < 565; a++)
	    {
	      
	      A[a][b]=A[a+5][b+4]+D[a][b][c]/B[a][b];
	      
	      B[a][b]=15;
	      B[a+4][b+1]=46;
	      
	      C[a][b]=A[a][b]-D[a][b][c];
	      C[a+5][b+5]=A[a][b]+B[a][b]-D[a][b][c];
	    }

    return 0;
}