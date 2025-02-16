/*BankAccount
Lucy Njunge
BSCIT-01-0156/2024
*/

#include <iostream>
using namespace std;

class BankAccount{
	private:
		string accountHolder;
		double balance;
		
		public:
			void setaccountHolder(string a){
				accountHolder=a;
			}
			
			string getaccountHolder(){
				return accountHolder;
			}
			
			void setbalance(double b){
				balance=b;
			}
			
			double getbalance(){
				return balance;
			}
			
};

int main(){
	BankAccount ba1;
	ba1.setaccountHolder("Lucy");
	cout<<"accountHolder is  "<<ba1.getaccountHolder()<<endl;
	
	ba1.setbalance(20000);
	cout<<"balance is "<<ba1.getbalance()<<endl;
	return 0;
}
