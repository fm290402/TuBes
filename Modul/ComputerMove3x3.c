/*Program : ComputerMove3x3.c
* Deskripsi : Pergerakan Komputer pada papan 3x3.
* Nama : Fadhil Muhammad
* tanggal/ versi : 19 - januari - 2021 / 1 
*/

void computer_move_3X3()
{
	int i,j;

    // Pengecekan baris

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<3;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][0]=='X'&& matrix[i][1]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<3;i++){
		if((matrix[i][0]=='O'&& matrix[i][2]=='O')||(matrix[i][0]=='X'&& matrix[i][2]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 3 adalah 'X' maka papan 1 adalah 'O'
	for(i=0;i<3;i++){
		if((matrix[i][1]=='O'&& matrix[i][2]=='O')||(matrix[i][1]=='X'&& matrix[i][2]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
		}
	}

	// Pengecekan Kolom

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<3;i++){
		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[0][i]=='X'&& matrix[1][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<3;i++){
		if((matrix[0][i]=='O'&& matrix[2][i]=='O')||(matrix[0][i]=='X'&& matrix[2][i]=='X')){								
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 3 adalah 'X' maka papan 1 adalah 'O'
	for(i=0;i<3;i++){
		if((matrix[2][i]=='O'&& matrix[1][i]=='O')||(matrix[2][i]=='X'&& matrix[1][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
		}
	}

	// Pengecekan Diagonal

	if((matrix[0][0]=='O'&&matrix[1][1]=='O')||(matrix[0][0]=='X'&&matrix[1][1]=='X')){										
		if(matrix[2][2]==' '){
				matrix[2][2]='O';
				return;
			}
	}

	if((matrix[0][0]=='O'&&matrix[2][2]=='O')||(matrix[0][0]=='X'&&matrix[2][2]=='X')){
		if(matrix[1][1]==' '){
				matrix[1][1]='O';
				return;
			}
	}

	if((matrix[1][1]=='O'&&matrix[2][2]=='O')||(matrix[1][1]=='X'&&matrix[2][2]=='X')){										
		if(matrix[0][0]==' '){
				matrix[0][0]='O';
				return;
			}
	}

	if((matrix[0][2]=='O'&&matrix[1][1]=='O')||(matrix[0][2]=='X'&&matrix[1][1]=='X')){					
		if(matrix[2][0]==' '){
				matrix[2][0]='O';
				return;
			}
	}

	if((matrix[0][2]=='O'&&matrix[2][0]=='O')||(matrix[0][2]=='X'&&matrix[2][0]=='X')){										
		if(matrix[1][1]==' '){
				matrix[1][1]='O';
				return;
			}
	}

	if((matrix[1][1]=='O'&&matrix[2][0]=='O')||(matrix[1][1]=='X'&&matrix[2][0]=='X')){										
		if(matrix[0][2]==' '){
				matrix[0][2]='O';
				return;
			}
	}

	// Menghalangi
	if(matrix[1][1]==' '){
		matrix[1][1]='O';															
		return;
	}

	if (matrix [1][1] == 'O') {

		if (matrix [0][0] == 'X') {

			if (matrix [2][2] == ' ') {
				matrix [2][2] = 'O';
				return;
			}
		}

		if (matrix [0][2] == 'X') {

			if (matrix [2][0] == ' ') {
				matrix [2][0] = 'O';
				return;
			}
		}

		if (matrix [2][0] == 'X') {

			if (matrix [0][2] == ' ') {
				matrix [0][2] = 'O';
				return;
			}	
		}

		if (matrix [2][2] == 'X') {

			if (matrix [0][0] == ' '){
				matrix [0][0] = 'O';
				return;
			}	
		}
	}

	if(matrix[1][1]=='X'){
		if(matrix[0][0]==' '){
			matrix[0][0]='O';
			return;
		}
	}

	if((matrix[0][0]=='X'&&matrix[2][2]=='X') || (matrix[0][2]=='X'&&matrix[2][0]=='X')){
		if(matrix[0][1]==' '){
			matrix[0][1]='O';
			return;
		}
	}

	if(matrix[1][1]=='X'&&matrix[2][2]=='X'){
		if(matrix[0][2]==' '){
			matrix[0][2]='O';
			return;
		}
	}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)

			if (matrix [i][j] == ' ') {

				matrix [i][j] = 'O';
				return;
			}
		
}