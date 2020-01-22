#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(610, 460, "random");
	int ***A = create_three_dim_int(100, 600, 110, "random");
	int ***C = create_three_dim_int(170, 870, 710, "random");

	for (int c = 4; c < 107; c++)
	  for (int b = 5; b < 455; b++)
	    for (int a = 3; a < 97; a++)
	    {
	      
	      B[a][b]=B[a+1][b+5]+41;
	      
	      A[a][b][c]=A[a+3][b+5][c+3]-20;
	      
	      A[a][b][c]=37;
	      
	      int var_a=C[a][b][c]*49;
	      int var_b=C[a+5][b+2][c+1]*33;
	      
	      A[a][b][c]=A[a][b][c]+C[a][b][c];
	      B[a][b]=A[a-3][b-5][c-4]*B[a][b];
	    }

    return 0;
}