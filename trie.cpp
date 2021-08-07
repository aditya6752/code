#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Node
{
public:
    char data;
    unordered_map<char, Node *> m;
    bool isterminal;
    Node(char d)
    {
        data = d;
        isterminal = false;
    }
};
class Trie
{
    Node* root;
    Trie(){
        root=new Node('\0');
    }

    insert(string word)
    {
        Node* temp = root;
        for(char ch: word){}}
    }
    search(string word)
    {

    }
};