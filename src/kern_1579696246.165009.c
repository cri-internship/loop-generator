#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(120, "ones");
	int ***B = create_three_dim_int(460, 180, 460, "ones");
	int *A = create_one_dim_int(720, "ones");
	int **C = create_two_dim_int(610, 210, "ones");

	for (int c = 4; c < 459; c++)
	  for (int b = 4; b < 178; b++)
	    for (int a = 2; a < 455; a++)
	    {
	      
	      B[a][b][c]=B[a][b][c-4]*A[a];
	      
	      B[a][b][c]=B[a+5][b][c]-19;
	      
	      B[a][b][c]=B[a][b+2][c+1]-C[a][b]+D[a]/A[a];
	      
	      B[a][b][c]=B[a][b][c]/D[a];
	      C[a][b]=B[a][b-4][c-1]/D[a]+C[a][b];
	    }

    return 0;
}