#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the insertionSort2 function below.
void insertionSort2(int n, vector<int> arr) {
    for(int i = 0; i<= n-2 ; i++) {
      int temp, j = i;

      if ( i == 0 ) {
        if ( arr[i] > arr[i+1] ) {
          temp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = temp; 
        }
      }
      else {
        if ( arr[i] > arr[i+1] ) {
          temp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = temp;
        }
        
        if ( arr[i-1] > arr[i] ) {
          while ( arr[j-1] > arr[j] ) {
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
          }
        }
      }

      for (int x = 0; x <= n-1 ; x++) {
        cout << arr[x] << " ";
      }
      cout << endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    insertionSort2(n, arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
