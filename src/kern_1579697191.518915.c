#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(510, 70, 840, "zeros");
	int **A = create_two_dim_int(920, 560, "zeros");

	for (int c = 2; c < 838; c++)
	  for (int b = 4; b < 67; b++)
	    for (int a = 4; a < 506; a++)
	    {
	      
	      A[a][b]=A[a][b-1]/B[a][b][c];
	      
	      B[a][b][c]=B[a-4][b-2][c-2]*20;
	      
	      int var_a=A[a][b]-26;
	      int var_b=A[a][b-4]-11;
	      
	      B[a][b][c]=B[a][b][c]*24;
	      A[a][b]=B[a+4][b+3][c]*A[a][b];
	      
	      B[a][b][c]=B[a][b][c]+A[a][b];
	      A[a][b]=B[a+1][b][c+2]-A[a][b];
	    }

    return 0;
}