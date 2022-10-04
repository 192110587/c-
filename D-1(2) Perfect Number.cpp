#include <iostream> 
#include <cctype>
using namespace std; 

int main(){
    int n,i=1,sum=0;
    cout << "Given number: ";
    cin >> n;
       while(i<n){
       if(n%i==0)
       sum=sum+i;
       i++; 
}
 
if(sum==n)
    cout << i << " it's a perfect number\n"; 
else
    cout << i << " it's not a perfect number\n";
    system("pause"); 

return 0;
}