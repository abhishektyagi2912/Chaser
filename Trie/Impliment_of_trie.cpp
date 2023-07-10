#include <iostream>
using namespace std;

class Trienode
{
public:
    char data;
    Trienode *children[26];
    bool isTerminal;

    Trienode(char ch)
    {
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie
{

public:
    Trienode *root;
    Trie()
    {
        root = new Trienode('\0');
    }

    // code of insert an element
    void insertUtils(Trienode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        // for small caps element
        int index = word[0] - 'a';
        Trienode *child;
        //

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // mean absent then we create a node
            child = new Trienode(word[0]);
            root->children[index] = child;
        }
        // recursiona are used
        insertUtils(child, word.substr(1));
    }
    // here we send the word
    void insert(string word)
    {
        insertUtils(root, word);
    }

    // searching
    bool searchUtil(Trienode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        Trienode *child;
        if (root->children[index] != nullptr)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool search(string word)
    {
        return searchUtil(root, word);
    }
};

int main()
{
    Trie *t = new Trie();
    t->insert("abc");
    t->insert("bbc");
    t->insert("cbc");
    t->insert("cba");
    cout << "search word " << t->search("cb") << endl;
    cout << "search word " << t->search("cba") << endl;

    return 0;
}