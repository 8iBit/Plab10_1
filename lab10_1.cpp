#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, percent, pay;
	double interest, total, newbalance;
	int endofyear=1; 
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> percent;
	percent*=0.01;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(true)
	{
		interest=loan*percent;
		total=loan+interest;
		 if(total<pay)
		 {
		 	pay=total;
		 }
		newbalance=total-pay;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << endofyear; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << newbalance;
	cout << "\n";	
	loan=newbalance;
	endofyear+=1;
	if(newbalance<=0)
	{
		break;
	}
	}
	
	return 0;
}
