#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(80, "ones");
	int **C = create_two_dim_int(270, 530, "ones");
	int *D = create_one_dim_int(660, "ones");
	int ***A = create_three_dim_int(930, 760, 970, "ones");

	for (int c = 1; c < 530; c++)
	  for (int b = 5; b < 80; b++)
	    for (int a = 5; a < 80; a++)
	    {
	      
	      B[a]=D[a]/38*C[a][b];
	      B[a-2]=D[a]+C[a][b]*A[a][b][c];
	      
	      int var_a=D[a]-9;
	      int var_b=D[a-5]-7;
	      
	      D[a]=C[a][b]+B[a]-A[a][b][c]/D[a];
	      A[a][b][c]=C[a-5][b-1]*B[a]+D[a];
	      
	      int var_c=B[a]-0;
	      int var_d=B[a-2]-14;
	    }

    return 0;
}