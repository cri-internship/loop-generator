#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(210, 830, "zeros");
	int ***C = create_three_dim_int(10, 530, 950, "zeros");
	int **B = create_two_dim_int(810, 30, "zeros");
	int ***A = create_three_dim_int(830, 310, 720, "zeros");

	for (int c = 2; c < 719; c++)
	  for (int b = 0; b < 29; b++)
	    for (int a = 3; a < 210; a++)
	    {
	      
	      A[a][b][c]=C[a][b][c]/D[a][b];
	      B[a][b]=A[a][b][c]+B[a][b]/D[a][b];
	      
	      D[a][b]=D[a][b+5]-A[a][b][c]/A[a][b][c]*B[a][b];
	      
	      A[a][b][c]=A[a+4][b+3][c+1]+B[a][b]*8/C[a][b][c];
	      
	      B[a][b]=14;
	    }

    return 0;
}