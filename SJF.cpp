#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of process: ";
    cin >> n;
    cout << endl;

    int arr[n], wtime[n], total = 0, pnumber[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter brust time process "<< i+1 <<" : ";
        cin >> arr[i];
        pnumber[i] = 0;
        pnumber[i] = i+1;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
                swap(pnumber[i], pnumber[j]);
            }
        }
    }

    cout << endl;
    wtime[0] = 0;

    for(int i=1; i<n; i++)
    {
        wtime[i] = wtime[i-1] + arr[i-1];
    }

    for(int i=0; i<n; i++)
    {
        cout << "Wating time for process "<< pnumber[i] << " : "<< wtime[i];
        total += wtime[i];
        cout << endl;

    }
    cout << endl << "Average wating time : "<< (float)total/n << endl;
    return 0;
}

