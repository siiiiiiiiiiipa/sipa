#include <iostream> 
using namespace std;
int main() {
	int i, n, t, a;
	i=1;
	t=0;
	cout << "masukan banyak nilai :" << endl;
	cin >> n;
	
	for (i; i<=n; i++){
		cout << "masukan nilai ke:";
		cin >> a;
		if (a%2== 0){
			t +=a;
		}
	}
	cout << "\njumlah:" << t << endl;
	return 0;
}
