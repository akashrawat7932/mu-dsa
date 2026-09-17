# include <iostream>
using namespace std;
int main(){
    int arr[6] = {10,12,8,7,5,13};
  int even = 0;
  int odd = 0;
    for(int i = 0; i < 6; i++){
 if(arr[i] % 2 == 0){
    even++;
 }
 else{
    odd++;
 }
}
cout << even <<endl;
cout<< odd<<endl;
    return 0;
}