#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(690, 170, 680, "ones");
	int *D = create_one_dim_int(820, "ones");
	int *E = create_one_dim_int(360, "ones");
	int ***B = create_three_dim_int(720, 760, 250, "ones");
	int ***C = create_three_dim_int(80, 220, 520, "ones");

	for (int c = 4; c < 246; c++)
	  for (int b = 1; b < 220; b++)
	    for (int a = 5; a < 80; a++)
	    {
	      
	      D[a]=D[a+1]-21;
	      
	      B[a][b][c]=B[a+4][b][c+4]/44;
	      
	      B[a][b][c]=B[a+5][b+4][c+1]+44;
	      
	      D[a]=34;
	      
	      C[a][b][c]=D[a]*B[a][b][c]/E[a]-C[a][b][c]+A[a][b][c];
	      
	      int var_a=C[a][b][c]*9;
	      int var_b=C[a][b-1][c-4]-13;
	      
	      int var_c=D[a]+12;
	      int var_d=D[a-3]+3;
	    }

    return 0;
}