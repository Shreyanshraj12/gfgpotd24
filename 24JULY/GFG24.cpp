class Solution
{
    public:
   vector<int> v_v;
    //Function to return list containing elements of right view of binary tree.
    void Right_View(vector<int> &v_v, int k, Node * root)
    {
        if(root == NULL)
        {
            return;
        }
        if(v_v.size() == k)
        {
            v_v.push_back(root->data);
        }
        Right_View(v_v, k + 1, root->right);
        Right_View(v_v, k + 1, root->left);
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
       Right_View(v_v, 0, root);
       return v_v;
    }
};