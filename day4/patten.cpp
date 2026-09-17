# include <iostream>
using namespace std;
int main(){
   int m = 5;
    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= m - i; j++)
        {
            cout << "";
        }
       
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    } //lower
    for (int i = m-1; i >= 1; i--)
    {

        for (int j = 1; j <= m - i; j++)
        {
            cout << "";
        }
       
        for (int k = 1; k <=(2 * i - 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Step 1.2: Focus on the number of rows: n rows
    for (int i = 0; i < m; i++) {
        // Step 2.4: Stars- Focus on the number of columns: 2*n - 2*i stars
        for (int j = 0; j < m - i - 1; j++) {
            // Step 3.4: Printing * in the inner loop till j < 2*n - 2*i
            cout<<"* ";
        }

        // Step 2.5: Spaces- Focus on the number of columns
        for (int j = 0; j < (2*i) + 2; j++) {
            // Step 3.5: Prining spaces in the inner loop till j is less than or equals to 2*n - 2*i
            cout<<"  ";
        }

        // Step 2.6: Stars- Focus on the number of columns: 2*n - 2*i stars
        for (int j = 0; j < m- i - 1; j++) {
            // Step 3.6: Printing * in the inner loop till j < 2*n - 2*i
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

