# include <iostream>
using namespace std;
int main(){
    int nums[6] ={10,12,8,7,5,13};
    int target = 7;
for(int i = 0; i < 6 ; i++){

    if(nums[i] == target){
        cout<< i;
    }
}
    return 0;
}