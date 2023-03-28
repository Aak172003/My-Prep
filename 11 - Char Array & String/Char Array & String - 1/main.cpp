#include <iostream>
#include <string.h>
using namespace std;

// TC-O(n)    SC-O(1)
int getLength(char ch[])
{

    int length = 0;
    int i = 0;
    while (ch[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
}
 
// ***************************************************************************************

// TC-O(n)    SC-O(1)
void reverse(char ch[]) 
{

    int i = 0;
    int n = getLength(ch);
    int j = n - 1;

    while (i < j)
    {
        swap(ch[i++], ch[j--]);
    }
}

// ***************************************************************************************


// TC-O(n)    SC-O(1)
void replaceSpaces(char ch[])
{

    int n = strlen(ch);
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == ' ')
            ch[i] = '@';
    }
}

// ***************************************************************************************

// Palindrome check krne ka apne pss 2 way hai 
// 1 - use extra char array of size n 
// 2 - use two pointer approch , 

// 1 - Way 
// TC-O(n)    SC-O(n)
bool isPalindrome(char ch[])
{

    int n = getLength(ch);

    char ch2[100];
    for (int i = 0; i < n; i++)
    {
        ch2[i] = ch[i];
    }
    ch2[n] = '\0';
    
    // Reverse kr dena hai , us new wale character array me 
    reverse(ch2);

    for (int i = 0; i < n; i++)
    {
        if (ch[i] != ch2[i])
            return false;
    }

    return true;
}


// 2 Way
// TC-O(n)    SC-O(1)
bool isPalindrome2(char ch[])
{

    int n = getLength(ch);
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (ch[i++] != ch[j--])
            return false;
    }

    return true;
}

// ***************************************************************************************


// TC-O(n)    SC-O(1)

void toUpperCase(char ch[])
{

    int n = getLength(ch);

    for (int i = 0; i < n; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
            ch[i] = ch[i] - 'a' + 'A';
    }
}

// ***************************************************************************************


// TC-O(n)    SC-O(1)
bool compare(string str1, string str2)
{
    // if dono string ka size hi same nhi hua to , hai false return krdenge 
    if (str1.length() != str2.length())
        return false;

    int n = str1.length();
    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
            return false;
    }

    return true;
}

// ***************************************************************************************

int main()
{

    // char arrays
    // input and output whole array in one go

    // space dene se phle ka sb kuch lika char array me store hoga
    // cin ignore space , enter or tab
    char name[100];
    cout << "enter your name" << endl;
    cin >> name;
    cout << "your name is " << name << " so how r u ? " << endl;


    // input index-wise
        char ch[100];
        ch[0] = 'a';
        ch[1] = 'b';
        ch[2] = 'a';
        ch[3] = 'b';
        cin>>ch[4];
        cout<<ch[0]<<ch[1]<<ch[2]<<ch[3]<<ch[4]<<'\n';
        cout<<ch<<'\n';


    // NULL character in method of input whole array in one go
        char ch[100];
        cin>>ch;
        
        for(int i=0;i<7;i++)
        {
            cout<<"index "<<i<<" value "<<ch[i]<<endl;
        }
        
        cout<<ch<<'\n';
        
        // showing Null Character 
        cout<<ch[6]<<'\n';
        int value = ch[6];
        cout<<value<<'\n';
    

    // overflow in char array
    
    char ch[5];
    cin>>ch;
    cout<<'\n';

    cout<<ch<<'\n';
    
    // character ka ASCII print hoga 
    for(int i=0; i<7; i++){
        cout<<(int)ch[i]<<' ';
    }
    cout<<'\n';
    
    // character array ek ek krke orint krdega 
    for(int i=0; i<7; i++){
        cout<<ch[i]<<',';
    }
    cout<<'\n';

    cout<<ch<<'\n';
    
// ********************************************************************************************

        char ch[5];
        cout<<ch<<'\n';
        cin>>ch;

        // int i=98;
        // cout<<ch<<'\n';
        // int j=97;
        // cout<<ch<<'\n';
        // int k=99;
        // cout<<ch<<'\n';
        // cout<<i<<'\n';
        // //  OR
        string s = "strs";

        cout<<ch<<'\n';
        cout<<ch[0]<<'\n';
        cout<<ch[1]<<'\n';
        cout<<ch[2]<<'\n';
        cout<<ch[3]<<'\n';
        cout<<ch[4]<<'\n';
        cout<<ch[5]<<'\n';
        cout<<ch[6]<<'\n';
        cout<<ch[7]<<'\n';
        cout<<ch[8]<<'\n';
        cout<<ch[9]<<'\n';
        cout<<ch[10]<<'\n';
        cout<<ch<<'\n';


    // cin stops reading at white spaces and cout stops printing at white spaces
        char ch[100];
        cin>>ch;
        cout<<ch<<'\n';


    // cin.getline ->> Acess white spces , tab , as well as enter 
        char ch[100];
        cin.getline(ch, 50);
        cout<<ch<<'\n';

        cin.getline(ch, 50, 'e');
        cout<<ch<<'\n';


    // length of char array
        char name[100];
        cin>>name;

        // getlength function , hume space tk ko count krega , rukega bs when counter Null character
        cout << getLength(name) << '\n';

        // strlen function find size find krega , jb tk koi space , enter m tab mhi aajata , uske bdd stop 
        cout << strlen(name) << '\n';

// ***************************************************************************************

    // some inbuilt functions in char arrays
        char name[100];
        cin>>name;

        cout << strlen(name) << '\n';

        cout << strcmp(name, "Ujjwal2327") << '\n';

        strcpy(name, "Abcde");
        cout << name << '\n';

// ***************************************************************************************


    // reverse a char array
        char ch[100];
        cin>>ch;
        reverse(ch);
        cout<<ch<<'\n';


// ***************************************************************************************


    // replace all spaces with @
        char ch[100];
        cin.getline(ch, 100);
        replaceSpaces(ch);
        cout<<ch<<'\n';


// ***************************************************************************************

    // pallindrome
        char ch[100];
        cin>>ch;
        bool ans = isPalindrome(ch);
        cout << ans << '\n';
        bool ans2 = isPalindrome2(ch);
        cout << ans2 << '\n';


// ***************************************************************************************


    // convert to uppercase
        char ch[100];
        cin>>ch;
        toUpperCase(ch);
        cout<<ch<<'\n';


// *************************** ************************************************************
// ***************************************************************************************


    // strings
    // string and taking input
        string str;
        cin>>str;
        cout<<str<<'\n';

        string str2;
        getline(cin, str2); 
        cout<<str2<<'\n';

// ***************************************************************************************


    // difference between string and array
        char ch[100] = "B_abba_r";
        cout << ch << '\n';
        ch[1] = '\0';
        ch[6] = '\0';
        cout << ch << '\n';

        string str = "B_abba_r";
        cout << str << '\n';
        str[1] = '\0';
        str[6] = '\0';
        cout << str << '\n';


    // terminating NULL char can be accessed in strings too
        string s;
        cin>>s;
        cout<<s<<'\n';
        cout<<s[s.length()]<<'\n';

// ***************************************************************************************

    // inbuilt functions of strings
    
        // string
        string str = "Ujjwal";
        cout << "str->  " << str << "\n\n";

// ******************

        // str.length()
        cout << "str.length()->  " << str.length() << "\n\n";

// ******************

        // str.empty()
        cout << "str.empty()->  " << str.empty() << "\n\n";

// *******************

        // str.push_back('char') -> add from last index
        str.push_back('@');
        cout << "str->  " << str << "\n\n";

// *******************

        // str.pop_back() -> remove from last index 
        str.pop_back();
        cout << "str->  " << str << "\n\n";

// ***********************************************************************************************************

        // hume string ke given kisi chote se part ka substring de skta hai 
        // str.substr(starting index, number of elements)
        
        cout << "str.substr(1,4)->  " << str.substr(1,4) << "\n";
        cout << "str->  " << str << "\n\n";

// *******************

        // str.compare(str2)        0 if equal      +ve if str[i]>str2[i]   -ve if str[i]<str2[i]
        
        str = "Ujjwal";
        string str2 = "Ujjwal2327";
        cout << "str.compare(str2)->  " << str.compare(str2) << '\n';
        cout << "str2.compare(str)->  " << str2.compare(str) << "\n\n";
        str = "Ujjwal1234";
        str2 = "Ujjwal2327";
        cout << "str.compare(str2)->  " << str.compare(str2) << '\n';
        cout << "str2.compare(str)->  " << str2.compare(str) << "\n\n";

// *********************************************************************************************

        // // str.find(str2);
        // str = "Hello Jee Kaise Ho Saare";
        // str2 = "Jee";
        // cout << "str.find(str2)->  " << str.find(str2) << '\n';
        // str2 = "everyone";
        // cout << "str.find(str2)->  " << str.find(str2) << "\n\n";


        // // string::npos  -> ek garbage value hai 
        // // hum check krte hai str.find(str2) == str.npos ke to mean not found 
        // cout << "string::npos->  " << string::npos << '\n';
        
        // if(str.find(str2) == string::npos)
        //     cout << "NOT FOUND\n\n";

// Example ->>>>>>>>>>>>>>>>>>>>>

        string str = "Hello Jee Kaise Ho Saare";
        string str2 = "Jee";
        
        if(str.find(str2) == string::npos)
        {
             cout << "NOT FOUND\n\n";    
        }
        else 
        cout<<"Found";

// **********************************************************************************************

        // str.replace(starting index, number of chars, str2)

        str = "This is my first message";
        str2 = "second";
        str.replace(11,5, str2);    
        // 11 is starting index , 5 is 5 character tk kaam krna hai , str2 means wo daalna hai 
        cout << "str->  " << str << "\n\n";

// *******************

        // str.erase(starting index, number of chars)
        str = "This is my first message";
        str.erase(11,5);   
        // starting index is 11 , or 5 character delete krna hai 
        cout << "str->  " << str << "\n\n";

// *******************

        // str.insert(strating index, str2);
        str2 = "first";
        str.insert(11, str2);
        // 11 index pr insert krne kaa 
        cout << "str->  " << str << "\n\n";

// ***************************************************************************************

    // implement compare 2 strings
        string str1;
        string str2;
        cin>>str1;
        cin>>str2;
        bool ans =  compare(str1, str2);
        cout << ans << '\n';


    return 0;
}

/*INPUTS
// input whole array in one go
Ujjwal

// input index-wise
c

// NULL character in method of input whole array in one go
Ujjwal

// overflow
Ujjwal

// cin stops reading at white spaces
Ujjwal Maheshwari
// OR
Ujjwal  Maheshwari
// OR
Ujjwal
Maheshwari

// cin.getline
Ujjwal Maheshwari
Ujjwal Maheshwari

// length of char array
Ujjwal

// some inbuilt functions in char arrays
Ujjwal123

// reverse a char array
Ujjwal123

// replace all spaces with @
Ujjwal Maheshwari Is A Boy

// pallindrome
madam

// convert to uppercase
Ujjwal123

// string and taking input
Ujjwal
// OR
Ujjwal Ujjwal Maheshwari

// compare 2 strings
Ujjwal
ujjwal
*/