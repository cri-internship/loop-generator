#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(850, 560, 470, "random");
	int **B = create_two_dim_int(450, 420, "random");

	for (int c = 0; c < 465; c++)
	  for (int b = 5; b < 420; b++)
	    for (int a = 5; a < 450; a++)
	    {
	      
	      B[a][b]=B[a-5][b-2]/17;
	      
	      A[a][b][c]=A[a-4][b-5][c]/6;
	      
	      A[a][b][c]=A[a+4][b+3][c+5]/B[a][b];
	      
	      A[a][b][c]=A[a+1][b][c]-46;
	    }

    return 0;
}