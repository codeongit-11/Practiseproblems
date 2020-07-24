// CPP program to remove all the 
// characters other then alphabets 
#include <bits/stdc++.h> 
using namespace std; 

// function to remove characters and 
// print new string 
void removeSpecialCharacter(string s) 
{ 
	for (int i = 0; i < s.size(); i++) { 
		
		// Finding the character whose 
		// ASCII value fall under this 
		// range 
		if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z') 
		{ 
			// erase function to erase 
			// the character 
			s.erase(i, 1); 
			i--; 
		} 
	} 
	cout << "\n After Removing Characters, String is :: " <<s<<"\n";
}
// driver code 
int main() 
{ 
	string s;
    cout << "Enter any string :: ";
    cin>>s;
    removeSpecialCharacter(s);
	return 0; 
} 