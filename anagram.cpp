#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

int number_needed(string a, string b) {
	vector<int> freq(26, 0);
    int count=0;
    for(int i=0; i<a.length(); i++)
        {
        freq[a[i]-'a']+=1;
    }
    for(int i=0; i<b.length(); i++)
        {
        freq[b[i]-'a']-=1;
    }
    for(int i=0; i<26; i++)
        {
        count+=abs(freq[i]);
    }
    return count;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
