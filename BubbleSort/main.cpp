#include <iostream>
#include <vector>

using namespace std;

void bubble(vector<int> &data)
{
    int aux = 0;
    bool change = false;
    int n = data.size() - 1;
    for(int i = 0; i<n; i++ )
    {
        for(int j = 0; j<n-i; j++)
        {
            if(data[j+1]<data[j])
            {
                change = true;
                aux = data[j+1];
                data[j+1] = data[j];
                data[j] = aux;
            }
        }
        if(!change)
        {
            break;
        }
    }
}


int main()
{
    int n;
    cout<<"Insert array length \n";
    cin>>n;
    vector<int> numbers(n);
    cout<<"Insert array data\n";
    for(int i = 0; i<n; i++)
    {
        cin>>numbers[i];
    }

   cout<<"Sorted array \n";
   bubble(numbers);
   for(int num: numbers)
   {
       cout<<num<<" ";
   }
    return 0;
}
