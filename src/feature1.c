#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 50);
	int ***C = create_three_dim_int(50, 50, 50);
	int *A = create_one_dim_int(100);

	for (int c = 0; c < 50; c++)
	  for (int b = 2; b < 49; b++)
	    for (int a = 2; a < 50; a++)
	    {
	      
	      C[a][b][c]=0.16279;
	      int var_a=C[a][b][c]-0.06304;
	      
	      A[a]=A[a-1]*0.08525;
	      
	      int var_b=C[a][b][c]+0.20045;
	      C[a][b][c]=0.35637;
	      
	      A[a]=A[a+1]-0.39014;
	      
	      C[a][b][c]=0.51078;
	      C[a][b][c]=0.52095;
	      
	      B[a][b+1]=0.81802;
	      B[a][b+1]=0.77997;
	      
	      int var_c=C[a][b][c]-0.45005;
	      int var_d=C[a][b][c]*0.89562;
	      
	      int var_e=A[a-1]+0.82421;
	      int var_f=A[a-1]/0.46079;
	    }

    return 0;
}