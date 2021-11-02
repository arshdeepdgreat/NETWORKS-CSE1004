#include <bits/stdc++.h>
using namespace std;
int dectofind()
{
    cout << "\nenter decimal ip address (dotted format)\n";
    string ip;
    cin >> ip;
    int pos = 0;
    for (int i = 0; i < ip.size(); i++)
    {
        if (ip[i] == '.')
        {
            pos = i;
            break;
        }
    }
    string bit = ip.substr(0, pos);
    int k = stoi(bit);
    if (k >= 0 && k <= 127)
        return 0;
    else if (k >= 128 && k <= 191)
        return 1;
    else if (k >= 192 && k <= 223)
        return 2;
    else if (k >= 224 && k <= 239)
        return 3;
    else if (k >= 240 && k <= 255)
        return 4;
    else
        return -1;
}
int main()
{
    cout << "=======================================================\n";
    cout << "Welcome to network da 3" << endl;
 cout<<" 1. Identify the class of IP Address for the given binary notation. \n 2. Identify the class of
IP Address for the given decimal notation. \n 3. Identify the default subnet mask for the given IP
Address. \n 4. Identify the first address and last address for the given address. \n 5. exit is -1 \n enter
your choice : " ;
 int choice;
 cin >> choice;
 if (choice == -1)
 {
     exit(0);
 }
 if (choice == 1)
 {
     cout << "\nenter binary ip address (dotted format)\n";
     string ip;
     cin >> ip;
     if (ip[0] == '0')
         cout << "class A\n";
     else if (ip.substr(0, 2) == "10")
         cout << "Class B\n";
     else if (ip.substr(0, 3) == "110")
         cout << "Class C\n";
     else if (ip.substr(0, 4) == "1110")
         cout << "Class D\n";
     else if (ip.substr(0, 4) == "1111")
         cout << "Class E\n";
     else
         cout << "INVALID INPUT";
 }
 if (choice == 2)
 {
     cout << "\nenter decimal ip address (dotted format)\n";
     string ip;
     cin >> ip;
     int pos = 0;
     for (int i = 0; i < ip.size(); i++)
     {
         if (ip[i] == '.')
         {
             pos = i;
             break;
         }
     }
     string bit = ip.substr(0, pos);
     int k = stoi(bit);
     if (k >= 0 && k <= 127)
         cout << "class A\n";
     else if (k >= 128 && k <= 191)
         cout << "class B\n";
     else if (k >= 192 && k <= 223)
         cout << "class C\n";
     else if (k >= 224 && k <= 239)
         cout << "class D\n";
     else if (k >= 240 && k <= 255)
         cout << "class E\n";
     else
         cout << "INVALID INPUT\n";
 }
 if (choice == 3)
 {
     int k = dectofind();
     if (k == 0)
         cout << "\n default subnet mask = 255.0.0.0";
     else if (k == 1)
         cout << "\n default subnet mask = 255.255.0.0";
     else if (k == 2)
         cout << "\n default subnet mask = 255.255.255.0";
     else if (k == 3)
         cout << "\n default subnet mask is not defined for class d";
     else if (k == 4)
         cout << "\n default subnet mask is not defined for class e";
     else if (k == -1)
         cout << "\n invaild input ";
     cout << endl;
 }
 if (choice == 4)
 {
     cout << "\nenter decimal ip address (dotted format)\n";
     string ip;
     cin >> ip;
     int pos;
     int q;
     for (int i = 0; i < ip.size(); i++)
     {
         if (ip[i] == '.')
         {
             pos = i;
             break;
         }
     }
     string bit = ip.substr(0, pos);
     int k = stoi(bit);
     if (k >= 0 && k <= 127)
         q = 0;
     else if (k >= 128 && k <= 191)
         q = 1;
     else if (k >= 192 && k <= 223)
         q = 2;
     else if (k >= 224 && k <= 239)
         q = 3;
     else if (k >= 240 && k <= 255)
         q = 4;
     else
         q = -1;
     if (q == 0)
     {
         cout << ip.substr(0, pos) << ".0.0.0 to " << ip.substr(0, pos) << ".255.255.255 ";
     }
     else if (q == 1)
     {
         for (int i = pos + 1; i < ip.size(); i++)
         {
             if (ip[i] == '.')
             {
                 pos = i;
                 break;
             }
         }
         cout << ip.substr(0, pos) << ".0.0 to " << ip.substr(0, pos) << ".255.255 ";
     }
     else if (q == 2)
     {
         for (int j = 0; j < 2; j++)
         {
             for (int i = pos + 1; i < ip.size(); i++)
             {
                 if (ip[i] == '.')
                 {
                     pos = i;
                     break;
                 }
             }
         }
         cout << ip.substr(0, pos) << ".0 to " << ip.substr(0, pos) << ".255 \n";
     }
     else
         cout << "Undefined for this \n";
 }
 main();
}
